#ifndef SUSER_H
#define SUSER_H

#include <user.h>
#include <automovil.h>
#include <bankaccount.h>
#include <housing.h>

	class Csuser: public Cuser
	{
		public:

	CAutomovil a;
	Cbank_account b;
	Housing c;

	Csuser() : Cuser::Cuser(){};
	Csuser(long unsigned int ,std::string ,std::string , unsigned int, unsigned int,/*Atributos de la clase Automovil */ std::string,std::string,double,/*Atributos de la clase Cbank_account*/double, long int,/*Atributos de las clase Chousing*/std::string, float, std::string, float);
	~Csuser(){};

	};


#endif
