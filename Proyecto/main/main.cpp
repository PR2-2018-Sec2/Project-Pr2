#include<tax_user.h>
#include <iomanip>
void pr(Ctax_user&);

int main(){

    Ctax_user x_account;

    pr(x_account);

    return 0;
}
void pr(Ctax_user& a){

	std::cout<<"\n\n **********************************User***********************************************"<<"\n\n";

	std::cout << std::left << std::setw(16) << "Id";
    std::cout << std::left << std::setw(16) << "Age";
    std::cout << std::left << std::setw(16) << "Sex";
    std::cout << std::left << std::setw(16) << "Name";
	std::cout << std::left << std::setw(16) << "Last name \n";
    std::cout << "---------------------------------------------------------\n";
	std::cout<<std::left << std::setw(16) <<a.get_id();
	std::cout<<std::left << std::setw(16) <<a.get_age();
	std::cout<<std::left << std::setw(16) <<a.get_sex();
	std::cout<<std::left << std::setw(16) <<a.get_name();
	std::cout<<std::left << std::setw(16) <<a.get_lname()<<"\n\n\n\n\n";

	std::cout<<"**********************************Vehicle***********************************************"<<"\n\n";
	std::cout<< std::left << std::setw(16) <<"Brand";
	std::cout<< std::left << std::setw(16) <<"Model";
	std::cout<< std::left << std::setw(16) <<"Lin plate";
	std::cout<< std::left << std::setw(16) <<"Price";
	std::cout<< std::left << std::setw(16) <<"Milieage";
	std::cout<< std::left << std::setw(16) <<"Year"<<"\n";
	std::cout << "---------------------------------------------------------------------------------------\n";
	std::cout<<std::left << std::setw(16) <<a.x_auto.get_brand();
	std::cout<<std::left << std::setw(16) <<a.x_auto.get_model();
	std::cout<<std::left << std::setw(16) <<a.x_auto.get_lin_plate();
	std::cout<<std::left << std::setw(16) <<a.x_auto.get_price();
	std::cout<<std::left << std::setw(16) <<a.x_auto.get_year()<<"\n\n\n\n\n";
	
	

	std::cout<<"**********************************Bank Account***********************************************"<<"\n\n";

	std::cout<<std::left << std::setw(16)<<"Balance";
	std::cout<<std::left << std::setw(16)<<"AccountNumber"<<"\n";
	
	std::cout << "---------------------------------------------------------------------------------------\n";
	std::cout<<std::left << std::setw(16)<<a.x_account.get_balance();
	std::cout<<std::left << std::setw(16)<<a.x_account.get_account_number()<<"\n\n\n\n\n";
	

	std::cout<<"**********************************HOUSING***********************************************"<<"\n\n";
	std::cout<<std::left << std::setw(16)<<"Type";
	std::cout<<std::left << std::setw(16)<<"Size";
	std::cout<<std::left << std::setw(16)<<"Valua";
	std::cout<<std::left << std::setw(16)<<"State";
	std::cout<<std::left << std::setw(16)<<"Address";
	std::cout<<std::left << std::setw(16)<<"City"<<"\n";
	
	std::cout << "---------------------------------------------------------------------------------------\n";


	std::cout<<std::left << std::setw(16)<<a.x_housing.get_type_housing();
	std::cout<<std::left << std::setw(16)<<a.x_housing.get_size();
	std::cout<<std::left << std::setw(16)<<a.x_housing.get_valuation();
	std::cout<<std::left << std::setw(16)<<a.x_housing.get_state();
	std::cout<<std::left << std::setw(16)<<a.x_housing.get_address();
	std::cout<<std::left << std::setw(16)<<a.x_housing.get_city()<<"\n\n\n\n";

    std::cout<<"**********************************TAX***********************************************"<<"\n\n";
    std::cout<<std::left << std::setw(16)<<"Tax"<<"\n";
    std::cout << "---------------------------------------------------------------------------------------\n";
    std::cout<<std::left << std::setw(16)<<a.get_tax()<<"\n\n\n\n";

	
}
