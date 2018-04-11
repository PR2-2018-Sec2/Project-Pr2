#include <tax_user.h>

	Ctax_user::Ctax_user(){
		this -> set_id(00000001);
		this -> set_name("NAME");
		this -> set_lname("LASTNAME");
		this -> set_age(19);
		this -> set_sex(1);
		this -> tax = 0;
		this-> x_auto = Cautomobile();
		this-> x_account = Cbank_account();
		this-> x_housing = CHousing();
	}
	/// Getters
	long int Ctax_user::get_tax() const
	{
		return this->tax;
	}

	/// Setters
	void Ctax_user::set_tax(long int u_tax){
		this-> tax = u_tax;
	}


/*

	Ctax_user::Ctax_user(Cuser aux_user, Cautomobile aux_auto, Cbank_account aux_bank, Housing aux_house)
	{
		/*this -> set_id(aux_user.get_id());
		this -> set_name(aux_user.get_name());
		this -> set_lname(aux_user.get_lname());
		this -> set_age(aux_user.get_age());
		//this -> set_sex(aux_user.get_sex());
		this -> a = aux_auto;
		//this -> b.set_balance(aux_bank.get_balance());
		//this -> b.set_account_number(aux_bank.get_account_number());
		this -> c.set_address(aux_house.get_address());
		this -> c.set_valuation(aux_house.get_valuation());
		this -> c.set_type_Housing(aux_house.get_type_Housing());
		this -> c.set_size(aux_house.get_size());

	} */