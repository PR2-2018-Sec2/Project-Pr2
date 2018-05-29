/**
 * @file tax_user.h
 * \~English @name Ctax_user object
 * \~Spanish @name Objeto Ctax_user
 * \~English @class Ctax_user
 * \~Spanish @class Ctax_user
 * \~Spanish @brief Implementación de objeto Impuesto
 * \~English @brief Tax object implementation

 * \~English @details This class Tax have all atributes related to a tax
 * @author Rafael Rivas
 * @email ingrafaelrivascalderon@gmail.com
 * @author Jeremy Roa
 * @email jmra0611@gmail.com
 * @author Oriana Pedroza
 * @email ingrafaelrivascalderon@gmail.com
 * \~Spanish @details La siguiente clase posee los atributos basicos de un impuesto
 * @author Rafael Rivas
 * @email ingrafaelrivascalderon@gmail.com
 * @author Jeremy Roa
 * @email jmra0611@gmail.com
 * @author Oriana Pedroza
 * @email ingrafaelrivascalderon@gmail.com
 *
 * \~Spanish @nota
 * Los atributos que posee son: 
 *
 *   - Impuesto

 * 
 * \~English @note     
 * The atributes are
 *    
 *   - Tax

*/
#ifndef TAX_USER_H
#define TAX_USER_H

#include <user.h>
#include <automobile.h>
#include <bank.h>
#include <housing.h>
#include <vector>

	class Ctax_user: public Cuser
	{
	private:
		float tax;
		
	public:
		
		Cautomobile x_auto;
		Cbank_account x_account;
		CHousing x_housing;


        /// \~Spanish Constructor por defecto \~English Default constructor
		Ctax_user();
		//Constructor parametrico funcionando. Nos enredamps y se fue la luz
		//Este recibe objetos que se instancian y se modifican en el main, para no tener que estar enviando dato por dato y que la definicion sea muy larga
		//Ctax_user(Cuser, Cautomobile, Cbank_account, Housing);
		~Ctax_user(){};

		// \~Spanish Observadores \~English Getters
		float get_tax() const;

		// \~Spanish Actuadores \~English Setters
		void set_tax(float);

		void set_tax(float,int);

	    bool decl_automobile(Cautomobile);
        bool decl_housing(CHousing);
        bool add_account(Cbank_account);

		bool verify_account(Cbank_account);

		int count_automobile();
		int count_housing();


	};

	


#endif
