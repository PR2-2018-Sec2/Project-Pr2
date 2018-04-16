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
	char sex;
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
	Cuser(long unsigned int ,std::string ,std::string , unsigned int, char, std::string);	
	/**
    
	 *@brief Destructor
     */
	~Cuser();

	/**
     * Getters 
    */

   	/**
		* @brief Obtener la id actual.
		* @return Un objeto Cuser, con la id actual.
	*/
	long unsigned int get_id()const;

	/**
	 * @brief Obtener el name actual.
	 * @return Un objeto Cuser, con el name actual.
	*/
	std::string get_name()const;

	/**
	 * @brief Obtener el lname actual.
	 * @return Un objeto Cuser, con el lname actual.
	*/
	std::string get_lname()const;

	/**
	 * @brief Obtener la age actual.
	 * @return Un objeto Cuser, con la age actual.
	*/
	unsigned int get_age()const;

	/**
	 * @brief Obtener el sex actual.
	 * @return Un objeto Cuser, con el sex actual.
	*/
	char get_sex()const;

	/**
	 * @brief Obtener la password actual.
	 * @return Un objeto Cuser, con la password actual.
	*/
    std::string get_password()const;

	/**
	 * Setters
    */

	/**
	 * @brief set_id Modifica el valor de id
	 * @param u_id Long unsigned int
	*/
	void set_id(long unsigned int );

	/**
	 * @brief set_name Modifica el valor de name
	 * @param u_name Cadena de caracteres
	*/
	void set_name(std::string );

	/**
	 * @brief set_lname Modifica el valor de lname
	 * @param u_lname Cadena de caracteres
	*/
	void set_lname(std::string );

	/**
	 * @brief set_age Modifica el valor de age
	 * @param u_age Unsigned int
	*/	///Verifica si la cadena tiene numeros
	void set_age(unsigned int );

	/**
	 * @brief set_sex Modifica el valor de sex
	 * @param u_sex Char
	*/
	void set_sex(char );

	/**
	 * @brief set_password Modifica el valor de password
	 * @param u_password Cadena de caracteres
	*/
    void set_password(std::string);

	/**
	 * @brief contains_number Verifica si la cadena tiene numeros
	*/
	bool contains_number(const std::string &);

	/**
	 * @brief Sobrecarga del operador = 
	 * @param Objeto Cuser
	 * @return Referencia a un objeto Cuser
    */
    Cuser& operator=(const Cuser);

    /**
	 * @brief Sobrecarga del operador == 
	 * @param Objeto Cuser
	 * @return TRUE or FALSE
    */
    bool operator==(const Cuser);

};

/**
 * @brief contains_number Verifica si la cadena tiene numeros
*/
bool contains_number(const std::string &);
#endif 
