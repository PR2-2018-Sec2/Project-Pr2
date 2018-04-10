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
			long unsigned int get_Id()const;
			unsigned int get_Age()const;
			std::string get_Sex()const;
			std::string get_Name()const;
			std::string get_Lname()const;

			///Modificadores
			void set_Id(long unsigned int );
			void set_Age(unsigned int );
			void set_Sex(unsigned int );
			void set_Name(std::string );
			void set_Lname(std::string );

			///Verifica si la cadena tiene numeros
			bool contains_Number(const std::string &);
};


#endif 
