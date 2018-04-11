/**
 * @file impuesto.h
 * @date 10/04/2018
 * @authors Teammates
 * @brief Implementación del objeto Ctax_user 
 * @note Acomodado por todos
*/
#ifndef TAX_USER_H
#define TAX_USER_H

#include <user.h>
#include <automobile.h>
#include <bank.h>
#include <housing.h>

	class Ctax_user: public Cuser
	{
	private:
		long int tax;

	public:

		Cautomobile x_auto;
		Cbank_account x_account;
		CHousing x_housing;
		//Constructor por defecto funcionando
		Ctax_user();
		//Constructor parametrico funcionando. Nos enredamps y se fue la luz
		//Este recibe objetos que se instancian y se modifican en el main, para no tener que estar enviando dato por dato y que la definicion sea muy larga
		//Ctax_user(Cuser, Cautomobile, Cbank_account, Housing);
		~Ctax_user(){};
		long int get_tax() const;
		void set_tax(long int);

	};


#endif
