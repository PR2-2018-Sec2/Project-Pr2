 /**
 *  @file user.cpp
 *  @name user.h 
 *  @author Raul Rojas 
 *  @author Diego Benitez 
 *  @author Luis Hernandez 
 *  @author Gabriel Guerrero   
 *  @author Alberto Calderon.
 *  @date 5/3/2018
 *  @brief Prototipos para el TDA Cuser
 *  @note
 * 		-El pasword solo sera aceptado si contiene al menos una letra mayuscula, un numero y caracter especial sin espacios
*/
#ifndef PRUEBA_H
#define PRUEBA_H
#include<iostream>
#include<stdexcept>
class Cuser
{
	private:

			long unsigned int id;
			std::string name;
			std::string lname;
			unsigned int age;
			std::string sex;
            		std::string password;
	
	public:
        
         /**
     * Constructores
    */
			 /**
     *@brief Constructor por defecto
     */
			Cuser();
			 /**
     *@brief Constructor por copia
     */
			Cuser(const Cuser &p);
			/**
     *@brief Constructor parametrizado
     */
			Cuser(long unsigned int ,std::string ,std::string , unsigned int, unsigned int, std::string);	
			/**
     *@brief Destructor
     */
			~Cuser();

/**
     * Getters 
    */
			long unsigned int get_id()const;
			unsigned int get_age()const;
			std::string get_sex()const;
			std::string get_name()const;
			std::string get_lname()const;
            		std::string get_password()const;

	/**
     * Setters
    */
			void set_id(long unsigned int );
			void set_age(unsigned int );
			void set_sex(std::string );
			void set_name(std::string );
			void set_lname(std::string );
            		void set_password(std::string);

};
	///Verifica si la cadena tiene numeros
			bool contains_number(const std::string &);
#endif 
