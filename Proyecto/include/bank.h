
/**
 * @file bank.h
 \~English @name Cbank object
 * \~Spanish @name Objeto Banco
 * \~English @class Cbank_account
 * \~Spanish @class Cbank_account
 * \~Spanish @brief Implementación de objeto banco
 * \~English @brief Bank object implementation
 * @date 10/04/2018
 * @author Leyra Albornoz 
 * \~English @details This class bank have all atributes related to a Bank account
 * \~Spanish @details La siguiente clase posee los atributos basicos de una cuenta bancaria
 * @date 10/04/2018
 * @author Leyra Albornoz 
 *
 * \~Spanish @nota
 * Los atributos que posee son: 
 *
 *   - Balance
 *   - Numero de cuenta
 * 
 * \~English @note     
 * The atributes are
 *    -Balance
 *    -Account number
*/
#ifndef BANK_H
#define BANK_H

#include<stdexcept>
#include <iostream>

class Cbank_account { 
							
	private:
                double balance;
		std::string account_number;
                std::string account_type;
                std::string id;
                std::string email;
                ///Tipo de cuenta Ahorro Corriente string
                ///Cedula string
                ///correo string
		
	public:

        /// \~Spanish Constructores \~English Constructors
        Cbank_account();
        /// \~English Parametric Constructor \~Spanish Constructor parametrico
        Cbank_account(double,std::string,std::string,std::string,std::string);
        /// \~English Parametric Constructor \~Spanish Constructor parametrico
        Cbank_account(const Cbank_account&);
      
        /// \~Spanish Destructor \~English Destructor
        ~Cbank_account(){};
      
        // \~Spanish Observadores \~English Getters 
        double get_balance() const;
        std::string get_account_number() const;
        std::string get_account_type() const;
        std::string get_id() const;
        std::string get_email() const;

        // \~Spanish Actuadores \~English Setters
        void set_balance (const double);
        void set_account_number (const std::string);
        void set_account_type (const std::string);
        void set_id (const std::string);
        void set_email (const std::string);

        Cbank_account operator=(const Cbank_account&);
	bool operator==(const Cbank_account&);

};
bool search_numbers(std::string);
#endif
