#ifndef SUSER_H
#define SUSER_H

#include <user.h>
#include <automovil.h>
#include <bank.h>
#include <housing.h>

	class Csuser: public Cuser
	{
		public:

	CAutomovil a;
	Cbank_account b;
	Housing c;
//Constructor por defecto funcionando
	Csuser();
//Constructor parametrico funcionando
//Este recibe objetos que se instancian y se modifican en el main, para no tener que estar enviando dato por dato y que la definicion sea muy larga
	Csuser(Cuser, CAutomovil, Cbank_account, Housing);
	~Csuser(){};

	};


#endif
