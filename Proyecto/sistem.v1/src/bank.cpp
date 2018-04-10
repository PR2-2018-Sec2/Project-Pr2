#include<bank.h>

Cbank_account::Cbank_account() { 
	   
	this->name = "Cristiano";
	this->last_name = "Messi";
	this->id = 0;		
	this->balance = 0;
	this->account_number = 0;
}

Cbank_account::Cbank_account(const std::string& nom, const std::string& ape, const int ced, const double sal, const long int cuenta ) { 
	this->name = nom;
	this->last_name = ape;
	this->id = ced;
	this->balance = sal;
	this->account_number = cuenta;

}

Cbank_account::Cbank_account(const Cbank_account& cuen){ 
	
	this->name = cuen.name;
	this->last_name = cuen.last_name;
	this->id = cuen.id;
	this->balance = cuen.balance;
	this->account_number= cuen.account_number; 
}

Cbank_account::~Cbank_account(){  
}
