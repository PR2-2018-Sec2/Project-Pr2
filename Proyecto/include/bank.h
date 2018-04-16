/**
 * @file bank.h
 * @date 10/04/2018
 * @authors Leyra Albornoz
 * @brief Implementación de objeto Cbank_account
 * @note Acomodado por el grupo carro        
*/
#ifndef BANK_H
#define BANK_H

#include<stdexcept>
#include <iostream>

class Cbank_account { 
							
	private:
		double balance;
		std::string account_number;
		
	public:

    /**
     * Constructores
    */

    /**
     *@brief Constructor por defecto
     */
		Cbank_account();
	/**
     *@brief Constructor parametrizado
     */
		Cbank_account(double,std::string);
    /**
     *@brief Constructor por copia
     */
		Cbank_account(const Cbank_account&);
	/**
     *@brief Destructor
     */
		~Cbank_account(){};
    /**
     * Getters 
    */

    /**
     *@brief get_balance
     *@return balance actual
     */
	double get_balance() const;
    /**
     *@brief get_account_number
     *@return account_number actual
     */
	std::string get_account_number() const;
	
	/**
	 * Setters
	*/
	
	 /**
     *@brief set_balance
     *@return balance actual
     */	
	void set_balance (const double);
	/**
     *@brief set_account_number
     *@return account_number actual
     */
	void set_account_number (const std::string);

};

#endif
