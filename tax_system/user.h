/**
 * @file user.h
 * \~English @name Cuser object
 * \~Spanish @name Objeto Cuser
 * \~English @class Cuser
 * \~Spanish @class Cuser
 * \~Spanish @brief Implementación de objeto usuario
 * \~English @brief User object implementation

 * \~English @details This class user have all atributes related to a user
 * @date 10/04/2018
 * @author Raul Rojas
 * @email 
 * @author Diego Benitez
 * @email 
 * @author Luis Hernandez
 * @email 
 * @author Gabriel Guerrero
 * @email 
 * @author Alberto Calderon
 * @email 
 * \~Spanish @details La siguiente clase posee los atributos basicos de un usuario
 * @date 10/04/2018
 * @author Raul Rojas
 * @email 
 * @author Diego Benitez
 * @email 
 * @author Luis Hernandez
 * @email 
 * @author Gabriel Guerrero
 * @email 
 * @author Alberto Calderon
 * @email 
 *
 * \~Spanish @nota
 * Los atributos que posee son: 
 *
 *   - Id codigo de identificacion
 *   - Nombre
 *   - Apellido
 *   - Edad
 *   - Sexo
 * 
 * \~English @note     
 * The atributes are
 *    
 *   - Id identification code
 *   - Name
 *   - Last name
 *   - Age
 *   - Sex
*/

#ifndef PRUEBA_H
#define PRUEBA_H
#include<bank.h>
#include<iostream>

class Cuser
{
	protected:

		std::string id;
		std::string name;
		std::string lname;
		unsigned int age;
		char sex;
		std::string password;
	public:
		/// \~English Constructor \~Spanish Constructor
		Cuser();
		/// \~English  Copied Constructor \~Spanish Constructor por copia

		Cuser(const Cuser &p);
		/// \~English Parametric Constructor \~Spanish Constructor parametrico
		Cuser(std::string ,std::string ,std::string , unsigned int, char, std::string); 

		/// \~English @brief Destructor \~Spanish @brief Destructor
		~Cuser();

		// \~English Getters \~Spanish Observadores
		std::string get_id()const;
		unsigned int get_age()const;
		char get_sex()const;
		std::string get_name()const;
		std::string get_lname()const;
		std::string get_password()const;

		// \~English Setters \~Spanish Actuadores
        virtual int set_id(std::string);
        int set_age(unsigned int);
        int set_sex(char);
        int set_name(std::string);
        int set_lname(std::string);
        int set_password(std::string);

		// \~Spanish Operadores sobrecargados \~English Overloaded operators
		Cuser& operator=(const Cuser);
		bool operator==(const Cuser);
		
		// \~Spanish Verifica si la cadena contiene numeros \~English Check if string has numbers
		bool contains_number(const std::string &);
};

// \~Spanish Verifica si la cadena contiene numeros \~English Check if string has numbers
		bool contains_number(const std::string &);
#endif 
