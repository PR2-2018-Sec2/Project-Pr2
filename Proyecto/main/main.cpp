#include <tax_user.h>
#include <iomanip>
#include <fstream>
#include <functional>
#include <cstdlib>
#include <sys/stat.h>
#include <tax_system.h>

void create_arc(Ctax_user& a)
{
	std::fstream arc("../database/tax_users.txt",std::ios::out);
	arc.clear();
	
	for(int i = 0; i < 10000;++i)
	  arc<<'1'<<std::setfill(' ') << std::setw(117) << '\n'; 
	arc.close();
	/*
	std::string asr = a.get_id();
	std::hash<std::string> ar;
	int pos = ar(asr) % 10000;
	std::cout << pos<< '\n';
	
	std::fstream arch;
	arch.open("../database/tax_users.txt");
	arch.clear();
	arch.seekp((pos-1)*118,std::ios::beg);
	arch<<std::left << std::setw(4) << "0"; 
	arch<<std::left << std::setw(16) <<a.get_id();
	arch<<std::left << std::setw(16) <<a.get_password();
	arch<<std::left << std::setw(16) <<a.get_sex();
	arch<<std::left << std::setw(16) <<a.get_name();
	arch<<std::left << std::setw(16) <<a.get_lname();
	arch<<std::left << std::setw(16) <<a.get_age();
    arch<<std::left << std::setw(16)<<a.get_tax();
	
	arch.seekp((pos-1)*118,std::ios::beg);
	
	char test = arch.peek();
	std::cout<< test << '\n';
	
	if(test == '0')
	{
	  arch<<"1                                                                                                                ";

	}
	arch.close();

	
	if(test == '0')
	{
	  arch<<"1                                                                                                                ";

	}
	arch.close();
	*/
}


void data(Ctax_user&);


int main()
{

    Ctax_user x_account1;
	x_account1.set_id("26371828");
	x_account1.set_password("A23-5678");
	x_account1.x_account.set_account_number("12345678901234567890");
	x_account1.x_auto.set_year(1994);

	Cadministrator as;

	std::hash<std::string> ar;
    std::string asr = x_account1.get_id();
    int pos = ar(asr) % 10000;

	Ctax_system sd;
	
    if(sd.create_database()) std::cout << "\n Se creo la base de datos\n";
	else std::cout << "\nBase de datos ya creada";

	if(sd.register_cl(x_account1)) std::cout<<"Se registro usuario\n";
    else std::cout << "\nUsuario ya registrado ---- No: \n" << pos << "\n";

    asr = as.get_id();
    pos = ar(asr) % 1000; 

	if(sd.register_adm(as)) std::cout << "Se registro administrador\n";
	else std::cout << "\nAdministrador ya registrado ---- No: \n" << pos << "\n";

	sd.cl = x_account1;

	Cbank_account prueba;
	Cautomobile prueba_auto;

	prueba_auto.set_price(325.12);

	sd.cl.decl_automobile(prueba_auto);

	CHousing prueba_house;
	prueba_house.set_valuation(100.12);
	sd.cl.decl_housing(prueba_house);
	//prueba.set_id("08027781");
	//prueba.set_account_number("52345678901234560000");

	//sd.cl.add_account(prueba);

	/*prueba.set_id("26021817");*/
	//prueba.set_account_number("00000000099990000111");

    //sd.cl.add_account(prueba);



	//create_arc(x_account1))
	//data(x_account1);
    return 0;
}


void data(Ctax_user& a){
	std::fstream out;

	out.open("database.txt",std::ios::out | std::ios::in);

	if(!out.is_open()) return throw std::invalid_argument("Nhhfhf");

	out<<std::left << std::setw(4) << " "; 
	out << std::left << std::setw(16) << "ID";
    out << std::left << std::setw(16) << "Password";
    out << std::left << std::setw(16) << "Sex";
    out << std::left << std::setw(16) << "Name";
	out << std::left << std::setw(16) << "Last name";
	out << std::left << std::setw(16) << "Age";
    out<<std::left << std::setw(16)<<"Tax"<<"\n";

	out<<std::left << std::setw(4) << "0"; 
	out<<std::left << std::setw(16) <<a.get_id();
	out<<std::left << std::setw(16) <<a.get_password();
	out<<std::left << std::setw(16) <<a.get_sex();
	out<<std::left << std::setw(16) <<a.get_name();
	out<<std::left << std::setw(16) <<a.get_lname();
	out<<std::left << std::setw(16) <<a.get_age();
    out<<std::left << std::setw(16)<<a.get_tax()<<"\n";
	out.close();
	std::string def = "../database/";
	std::string ced;
	out.open("database.txt",std::ios::in);
	if(!out.good())
		exit(2);
	out.clear();
	out.seekg(117+4);
	std::getline(out,ced,' ');
	out.close();
	def += ced;
	mkdir(def.c_str(),S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
	std::string car = def + "/" + ced + "_a.txt";
	std::string acc = def + "/" + ced + "_b.txt";
	std::string bank = def + "/" + ced + "_h.txt";
	std::ofstream we;
	we.open(car);
	we.close();
	we.open(acc);
	we.close();
	we.open(bank);
	we.close();

	/*
	out<< std::left << std::setw(22) <<"Brand";
	out<< std::left << std::setw(22) <<"Model";
	out<< std::left << std::setw(22) <<"Lin plate";
	out<< std::left << std::setw(22) <<"Price";
	out<< std::left << std::setw(22) <<"Year"<<"\n";
	out<<std::left << std::setw(22) <<a.x_auto.get_brand();
	out<<std::left << std::setw(22) <<a.x_auto.get_model();
	out<<std::left << std::setw(22) <<a.x_auto.get_lin_plate();
	out<<std::left << std::setw(22) <<a.x_auto.get_price();
	out<<std::left << std::setw(22) <<a.x_auto.get_year()<<"\n";
	
	out<<std::left << std::setw(22)<<"Balance";
	out<<std::left << std::setw(22)<<"AccountNumber";
	out<<std::left << std::setw(22)<<"AccountType";
	out<<std::left << std::setw(22)<<"ID";
	out<<std::left << std::setw(22)<<"Email"<<"\n";
	
	out<<std::left << std::setw(22)<<a.x_account.get_balance();
	out<<std::left << std::setw(22)<<a.x_account.get_account_number();
	out<<std::left << std::setw(22)<<a.x_account.get_account_type();
	out<<std::left << std::setw(22)<<a.x_account.get_id();
	out<<std::left << std::setw(22)<<a.x_account.get_email()<<"\n";	

	out<<std::left << std::setw(22)<<"Type";
	out<<std::left << std::setw(22)<<"Size";
	out<<std::left << std::setw(22)<<"Valua";
	out<<std::left << std::setw(22)<<"State";
	out<<std::left << std::setw(22)<<"Address";
	out<<std::left << std::setw(22)<<"City"<<"\n";

	out<<std::left << std::setw(22)<<a.x_housing.get_type_housing();
	out<<std::left << std::setw(22)<<a.x_housing.get_size();
	out<<std::left << std::setw(22)<<a.x_housing.get_valuation();
	out<<std::left << std::setw(22)<<a.x_housing.get_state();
	out<<std::left << std::setw(22)<<a.x_housing.get_address();
	out<<std::left << std::setw(22)<<a.x_housing.get_city()<<"\n";


	
	out.close();
*/	
}
