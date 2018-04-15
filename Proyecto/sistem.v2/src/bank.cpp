
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

Cbank_account::Cbank_account() 
{ 		
	this->balance = 0;
	this->account_number = "10000000000000000000";
}

/// \~English @brief Parametric Constructor \~Spanish @brief Constructor parametrico
/// \~English @comment Set values of  balace and account number \~Spanish @comment Cambia las variables de balace y numero de cuenta
/// \~English @param balance \~Spanish @param doble 
/// \~English @param doble \~Spanish @param Doble precision

Cbank_account::Cbank_account(double bal,std::string acc)
{
	this->set_balance(bal);
	this->set_account_number(acc);

}
/// \~English @brief Copied Constructor \~Spanish @brief  Constructor por copia
/// \~English @comment Set values of  balace and account number \~Spanish @comment Cambia las variables de balace y numero de cuenta
/// \~English @&p objet Cbank_accoun (copy) \~Spanish @&p objeto Cbank_accoun (copia)
Cbank_account::Cbank_account(const Cbank_account& cuen)
{
	this->balance = cuen.balance;
	this->account_number= cuen.account_number; 
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

/// \~Spanish @name Actuadores 
///\~English @name Setters

/// \~English @brief Changing balance value \~Spanish @brief Cambiar balance
/// \~English @param double \~Spanish @param Doble precision
			
void Cbank_account::set_balance (const double bal)
{
	if(bal >= 0){
		this->balance = bal;
	}
	else{
		throw std::domain_error("Invalided balance");
	}
}

/// \~English @brief Changing account value \~Spanish @brief Cambiar cuenta
/// \~English @param String \~Spanish @param Cadena

void Cbank_account::set_account_number(const std::string acc)
{
	if(acc.size() == 7){
		this->account_number = acc;
	}
	else{
		throw std::invalid_argument("Invalided account");
	}
}