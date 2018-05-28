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
	void Ctax_user::set_tax(float u_tax){
		if(u_tax >= 0)
		  this-> tax = u_tax;
		else throw std::invalid_argument("Invalid Tax");
	}

    bool Ctax_user::decl_automobile(Cautomobile)
    {

    }

    bool Ctax_user::decl_housing(CHousing)
    {

    }

	
    bool Ctax_user::add_account(Cbank_account acc)
    {

		verify_account(acc);

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

			std::cout << "\nCuenta Bien registrada";

			return true;
		}

		std::cout << "\nProblemas al registrar";

		return false;
    }

	bool Ctax_user::verify_account(Cbank_account acc)
	{
		
		std::string search,id_file = "../database/" + this->get_id() + "/" + this->get_id() + "_b.txt";

		std:: fstream arch;

		arch.open(id_file,std::ios::in);
				
		if(arch.fail()) 
		    return false;

		arch.clear();
		
		while(!arch.eof())
		{			
			search.clear();
			std::getline(arch,search,' ');
			if(search == acc.get_account_number())
			{
				arch.close();
				return false;
			}
			if(!arch.eof()) arch.seekg((21 * 4));
		}

		arch.close();
		return true;
	}
