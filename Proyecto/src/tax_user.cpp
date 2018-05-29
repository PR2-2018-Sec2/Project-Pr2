/**
 * @file tax_user.cpp
 * @date 10/04/2018
 * @email ingrafaelrivascalderon@gmail.com
 * @author Jeremy Roa
 * @email jmra0611@gmail.com
 * @author Oriana Pedroza
 * @email ingrafaelrivascalderon@gmail.com
 * 
 * \~Spanish @brief Definiciones para el TDA Ctax_user  \~English @brief Ctax_user definitions
*/

#include <tax_user.h>
#include <fstream>
#include <iomanip>
#include <vector>
#include <functional>
#include <cstdlib>
#include <sys/stat.h>

	/// \~Spanish @name Constructores 
	///\~English @name Constructor


	/// \~English @brief Default Constructor \~Spanish @brief Constructor por defecto
	Ctax_user::Ctax_user(): Cuser(){
		this -> tax = 0;
		this-> x_auto = Cautomobile();
		this-> x_account = Cbank_account();
		this-> x_housing = CHousing();
	}

	/// \~Spanish @name Observadores 
	///\~English @name Getters

	/// \~Spanish @brief Ver impuesto  \~English @brief Get tax
	/// \~Spanish @return impuesto actual  \~English @return Current tax
	float Ctax_user::get_tax() const
	{
		return this->tax;
	}

	/// \~Spanish @name Actuadores 
	///\~English @name Setters

	/// \~Spanish @brief Cambiar impuesto \~English @brief Changing tax value
	/// \~Spanish @param cadena\~English @param string
	void Ctax_user::set_tax(float u_tax)
	{
		if(u_tax >= 0)
		  this-> tax = u_tax;
		else throw std::invalid_argument("Invalid Tax");
	}

    void Ctax_user::set_tax(float u_tax,int mode)
	{
	    std::hash<std::string> ar;
        std::string asr = this->get_id();
            
		int pos = ar(asr) % 10000;
		
		std::fstream arch_2;

		double aux;
            
		arch_2.open("../database/tax_users.txt");
            
		if (!arch_2.is_open())
            exit(1);

		arch_2.seekp(((pos - 1) * 118) + 100, std::ios::beg);

		arch_2 >> aux;

		arch_2.close(); 

		this->tax = aux;
		std::cout<<this->tax<<"\n";
		if(u_tax >= 0)
		{
			switch (mode){
				case 0:
				this-> tax += u_tax * 0.12;	
				break;
				case 1:
				this-> tax += (u_tax * 0.25);
				break;
				case 2:
				this-> tax += u_tax * 0.10;
				break;
				case 3:
				this-> tax += (u_tax * 0.25);
				break;
			}
					std::cout<<this->tax<<"\n";
 
		}
		else throw std::invalid_argument("Invalid Tax");
		
	}

    bool Ctax_user::decl_automobile(Cautomobile aut)
    {
		
			std::string id_file = "../database/" + this->get_id() + "/" + this->get_id() + "_a.txt";
			std:: fstream arch(id_file,std::ios::in | std::ios::out | std::ios::app);

			if(!arch.is_open()) return false;

	           arch<<std::left << std::setw(22) <<aut.get_brand();
	           arch<<std::left << std::setw(22) <<aut.get_model();
	           arch<<std::left << std::setw(22) <<aut.get_lin_plate();
	           arch<<std::left << std::setw(22) <<aut.get_price();
	           arch<<std::left << std::setw(22) <<aut.get_year()<<"\n";

			arch.close();

			this->set_tax(aut.get_price(),this->count_automobile());

			std::hash<std::string> ar;
            std::string asr = this->get_id();
            
			int pos = ar(asr) % 10000;
            
			std::fstream arch_2;
            
			arch_2.open("../database/tax_users.txt");
            
			if (!arch_2.is_open())
                return false;

			arch_2.seekp(((pos - 1) * 118) + 101, std::ios::beg);

			arch_2  << std::left << std::setw(16) << this->get_tax();

			arch_2.close();

			return true;


    }

    bool Ctax_user::decl_housing(CHousing house)
    {
		
			std::string id_file = "../database/" + this->get_id() + "/" + this->get_id() + "_h.txt";
			std:: fstream arch(id_file,std::ios::in | std::ios::out | std::ios::app);

			if(!arch.is_open()) return false;

			arch<<std::left << std::setw(22)<<house.get_type_housing();
			arch<<std::left << std::setw(22)<<house.get_size();
			arch<<std::left << std::setw(22)<<house.get_state();
			arch<<std::left << std::setw(22)<<house.get_valuation();
			arch<<std::left << std::setw(22)<<house.get_address();
			arch<<std::left << std::setw(22)<<house.get_city()<<"\n";

			arch.close();

			this->set_tax(house.get_valuation(),this->count_housing());

			std::hash<std::string> ar;
            std::string asr = this->get_id();
            
			int pos = ar(asr) % 10000;
            
			std::fstream arch_2;
            
			arch_2.open("../database/tax_users.txt");
            
			if (!arch_2.is_open())
                return false;

			arch_2.seekp(((pos - 1) * 118) + 101, std::ios::beg);

			arch_2  << std::left << std::setw(16) << this->get_tax();

			arch_2.close();

			return true;
    }

	
    bool Ctax_user::add_account(Cbank_account acc)
    {

		if ((acc.get_id() == this->get_id()) and (verify_account(acc) == true))
		{
			std::string id_file = "../database/" + this->get_id() + "/" + this->get_id() + "_b.txt";
			std:: fstream arch(id_file,std::ios::in | std::ios::out | std::ios::app);

			if(!arch.is_open()) return false;

			arch<<std::left << std::setw(21)<<acc.get_account_number();
			arch<<std::left << std::setw(21)<<acc.get_balance();	        
	        arch<<std::left << std::setw(21)<<acc.get_account_type();
	        arch<<std::left << std::setw(21)<<acc.get_id();
	        arch<<std::left << std::setw(21)<<acc.get_email()<<"\n";

			arch.close();

			return true;

		}else{

			return false;
		}
    }

	bool Ctax_user::verify_account(Cbank_account acc)
	{
		
		std::string search,id_file = "../database/" ,account;

		id_file += this->get_id() + "/" + this->get_id() + "_b.txt";

		std::ifstream arch;

		arch.open(id_file.c_str());
				
		if(!arch.is_open()){ 
			arch >> search;
			arch.close();
			std::cout << "problema\n";
		    return false;
		}

        while(!arch.eof())
		{
			std::getline(arch,search,'\n');
			account = search.substr(0, 20);

			if(account == acc.get_account_number())
			{
				arch.close();
			    return false;
			}

		}

		arch.close();
		return true;

		/*
		
		Necesitaos que nos ayuden a resolverlo con seekg(). Gracias 


		int i = 1, j = 106;


		while(i < 10 and (arch.peek() != arch.eof()))
		{
			if(arch.peek() == arch.eof() or arch.eof()){
				arch.close();
				return true;
			}

			std::cout << i << " " << j*i << '\n'; 
			std::getline(arch,search,' ');
			//arch >> search;
			std::cout << search << '\n';

			if(search == acc.get_account_number())
			{
				arch.close();
				return false;
			}
			if(arch.peek() != arch.eof() or (!arch.eof()))
			{
				std::cout << (char)(arch.peek()) <<"---\n";
				arch.seekg((j));
				std::cout << (char)(arch.peek()) <<"---\n";
			}
			else std::cout << "Final de Archivo.\n";

			i++;
			search.clear();
		}*/	

		arch.close();
		return true;
	}

	int Ctax_user::count_automobile()
	{
        std::string id_file = "../database/" + this->get_id() + "/" + this->get_id() + "_a.txt",search;
		std::ifstream arch;
		int i = 0;

		arch.open(id_file);

		while(!arch.eof())
		{
			std::getline(arch,search,'\n');
			i++;
			if(i > 2)
			{
				arch.close();
				return 1;
			}
		}

		arch.close();
		return 0;
	}

	int Ctax_user::count_housing()
	{
 	std::string id_file = "../database/" + this->get_id() + "/" + this->get_id() + "_h.txt",search;
		std::ifstream arch;

		int i = 0;

		arch.open(id_file);

		while(!arch.eof())
		{
			std::getline(arch,search,'\n');
			i++;
			if(i > 2)
			{
				arch.close();
				return 3;
			}
		}

		arch.close();
		return 2;
	}

	
