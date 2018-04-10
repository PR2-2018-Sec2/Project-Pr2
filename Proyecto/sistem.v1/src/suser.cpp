#include <suser.h>

	Csuser::Csuser(Cuser aux_user, CAutomovil aux_auto, Cbank_account aux_bank, Housing aux_house)
	{
		this -> set_id(aux_user.get_id());
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
	}