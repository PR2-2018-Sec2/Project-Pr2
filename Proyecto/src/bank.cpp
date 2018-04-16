/**
 * @file bank.h
 * @date 10/04/2018
 * @authors Leyra Albornoz
 * @brief Implementación de objeto Cbank_account
 * @note Acomodado por el grupo carro        
*/
#include<bank.h>
/**
 * Constructores
 */

/**
  *@brief Constructor por defecto
*/
Cbank_account::Cbank_account() 
{ 		
	this->balance = 0;
	this->account_number = "10000000000000000000";
}
/**
  *@brief Constructor parametrizado
*/
Cbank_account::Cbank_account(double bal,std::string acc)
{
	this->set_balance(bal);
	this->set_account_number(acc);

}
/**
  *@brief Constructor por copia
*/
Cbank_account::Cbank_account(const Cbank_account& cuen)
{
	this->balance = cuen.balance;
	this->account_number= cuen.account_number; 
}
/**
  * Getters 
*/

/**
*@brief get_balance
*@return balance actual
*/
double Cbank_account::get_balance() const
{
	return(this->balance);
}
/**
*@brief get_account_number
*@return account_number actual
*/
std::string Cbank_account::get_account_number() const
{
	return(this->account_number);
}

/**
* Setters
*/
	
/**
*@brief set_balance
*@return balance actual
*/			
void Cbank_account::set_balance (const double bal)
{
	if(bal >= 0){
		this->balance = bal;
	}
	else{
		throw std::domain_error("Invalided balance");
	}
}
/**
*@brief set_account_number
*@return account_number actual
*/
void Cbank_account::set_account_number(const std::string acc)
{
	if(acc.size() == 7){
		this->account_number = acc;
	}
	else{
		throw std::invalid_argument("Invalided account");
	}
}