
/**
 * @file bank.cpp
 * @date 10/04/2018
 * @author Leyra Albornoz
 * \~Spanish @brief Definiciones para el TDA Cbank_account  \~English @brief Cbank_account definitions
*/
#include<bank.h>

/// \~Spanish @name Constructores 
///\~English @name Constructor

/// \~English @brief Default Constructor \~Spanish @brief Constructor por defecto
bool search_numbers(std::string str){
    for(unsigned int i = 0; i < str.size();i++){
			if(!std::isdigit(str[i])){
				return false;
			}
	}
	return true;

}
Cbank_account::Cbank_account() 
{ 		
	this->balance = 0;
	this->account_number = "10000000000000000000";
	this->account_type = "Corriente";
	this->id = "12345678";
	this->email = "fake@gmail.com";
    this->bank = "NULL";
}

/// \~English @brief Parametric Constructor \~Spanish @brief Constructor parametrico
/// \~English @comment Set values of  balace and account number \~Spanish @comment Cambia las variables de balace y numero de cuenta
/// \~English @param balance \~Spanish @param doble 
/// \~English @param doble \~Spanish @param Doble precision

Cbank_account::Cbank_account(double bal,std::string acc,std::string type,std::string b_id,std::string ema,std::string bank)
{
	this->set_balance(bal);
	this->set_account_number(acc);
	this->set_account_type(type);
	this->set_id(b_id);
	this->set_email(ema);
    this->set_bank(bank);

}
/// \~English @brief Copied Constructor \~Spanish @brief  Constructor por copia
/// \~English @comment Set values of  balace and account number \~Spanish @comment Cambia las variables de balace y numero de cuenta
/// \~English @&p objet Cbank_accoun (copy) \~Spanish @&p objeto Cbank_accoun (copia)
Cbank_account::Cbank_account(const Cbank_account& cuen)
{
	this->balance = cuen.balance;
	this->account_number= cuen.account_number;
	this->account_type = cuen.account_type;
	this->id = cuen.id;
	this->email = cuen.email; 
    this->bank = cuen.bank;
}

/// \~Spanish @name Observadores 
///\~English @name Getters

/// \~English @brief get balance  \~Spanish @brief Ver Balance 
/// \~English @return Current balance  \~Spanish @return Balance actual

double Cbank_account::get_balance() const
{
	return(this->balance);
}


/// \~English @brief get balance  \~Spanish @brief Ver Balance 
/// \~English @return Current balance  \~Spanish @return Balance actual

std::string Cbank_account::get_account_number() const
{
	return(this->account_number);
}

std::string Cbank_account::get_account_type() const
{
	return(this->account_type);
}
std::string Cbank_account::get_id() const
{
	return this->id;
}
std::string Cbank_account::get_email() const
{
	return this->email;
}

std::string Cbank_account::get_bank() const
{
    return this->bank;
}
/// \~Spanish @name Actuadores 
///\~English @name Setters

/// \~English @brief Changing balance value \~Spanish @brief Cambiar balance
/// \~English @param double \~Spanish @param Doble precision
			
int Cbank_account::set_balance (const double bal)
{
	if(bal >= 0){
		this->balance = bal;
        return 0;
	}
	else{
        return 1;//throw std::domain_error("Invalided balance");
	}
}

/// \~English @brief Changing account value \~Spanish @brief Cambiar cuenta
/// \~English @param String \~Spanish @param Cadena

int Cbank_account::set_account_number(const std::string acc)
{
	if((acc.size() == 20) and (search_numbers(acc))){
		this->account_number = acc;
        return 0;
	}
	else{
        return 1;//throw std::invalid_argument("Invalided account");
	}
}
int Cbank_account::set_account_type (const std::string type)
{
	if((type == "Ahorro") or (type == "Corriente"))
	{
		this->account_type = type;
        return 0;
	}
	else
	{
        return 1;//throw std::invalid_argument("Invalided type account");
	}
}

int Cbank_account::set_id (const std::string b_id)
{
	if((b_id.size() == 8) and (search_numbers(b_id))){
		this->id = b_id;
        return 0;
	}else
	{
        //throw std::invalid_argument("Invalided ID");
        return 1;
	}
}
int Cbank_account::set_email (const std::string ema)
{
	if((ema.find(".com") == ema.size()-4) and ((ema.find('@') < ema.size()-5)))
	{
		this->email = ema;
        return 0;
	}else{
        //throw std::invalid_argument("Invalid email");
        return 1;
	}
}

int Cbank_account::set_bank(const std::string ban)
{
    this->bank = ban;
    return 0;
}


/// \~Spanish @name Sobrecarga de operadores  
///\~English @name Operator's overload

/// \~Spanish @brief Sobrecarga del operador = \~English @brief Operator overload =
/// \~Spanish @param Objeto Cbank_account \~English @param Cbank_account object
/// \~Spanish @return Referencia a un objeto Cbank_account \~English @return Cbank_account reference
Cbank_account Cbank_account::operator=(const Cbank_account& p){
	this->balance = p.balance;
	this->account_number = p.account_number;
    this->bank = p.bank;
	return (*this);
}
/// \~Spanish @brief Sobrecarga del operador == \~English @brief Operator overload ==
/// \~Spanish @param Objeto Cbank_account \~English @param CHousing object
/// \~Spanish @return TRUE or FALSE \~English @return TRUE or FALSE
bool Cbank_account::operator==(const Cbank_account& p){
	return((this->balance == p.balance ) && (this->account_number == p.account_number));
}
