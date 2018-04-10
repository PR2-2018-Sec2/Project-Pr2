/**
 * 	@file user.h
 *  @author's Raul Rojas, Diego Benitez, Luis Hernandez, Gabriel Guerrero, Alberto Calderon.
 *  @Date 5/3/2018
 *  @brief Prototipos para el TDA Cuser
*/
#ifndef PRUEBA_H
#define PRUEBA_H
#include<iostream>

class Cuser
{
	private:

			long unsigned int id;
			std::string name;
			std::string lname;
			unsigned int age;
			std::string sex;
	
	public:
			///Constructores
			///Por defecto
			Cuser();
			///Copia
			Cuser(const Cuser &p);
			///Parametros
			Cuser(long unsigned int ,std::string ,std::string , unsigned int, unsigned int);	
			///Destructor
			~Cuser();

			///Observadores
			long unsigned int get_id()const;
			unsigned int get_age()const;
			std::string get_sex()const;
			std::string get_name()const;
			std::string get_lname()const;

			///Modificadores
			void set_id(long unsigned int );
			void set_age(unsigned int );
			void set_sex(unsigned int );
			void set_name(std::string );
			void set_lname(std::string );

			///Verifica si la cadena tiene numeros
			bool contains_number(const std::string &);
};


#endif 
