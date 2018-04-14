/**
 *  @file user.cpp
 *  @name user.cpp
 *  @author Raul Rojas 
 *  @author Diego Benitez 
 *  @author Luis Hernandez 
 *  @author Gabriel Guerrero   
 *  @author Alberto Calderon.
 *  @date 5/3/2018
 *  @brief Definiciones para el TDA Cuser
*/
#include <user.h>
#include <iostream>

 /**
     * Constructores
    */

    /**
     *@brief Constructor por defecto
     */
Cuser::Cuser ()
{
        this -> id=00000001;
        this -> name="NAME";
        this -> lname="LASTNAME";
        this -> age=19;
        this -> sex=1;
        this -> password="NULL";
}

 /**
     *@brief Constructor parametrizado
     */
Cuser::Cuser (long unsigned int a, std::string b, std::string c, unsigned int d, std::string e, std::string f)
{
	this -> set_id(a);
	this -> set_name(b);
	this -> set_lname(c);
	this -> set_age(d);
	this -> set_sex(e);
    this -> set_password(f);
}
 /**
     *@brief Constructor por copia
     */
Cuser::Cuser(const Cuser &p)
{
	this -> id = p.id;
	this -> name = p.name;
	this -> lname = p.lname;
	this -> age = p.age;
	this -> sex= p.sex;
        this -> password = p.password;
}

  /**
     *@brief Destructor
     */
Cuser::~Cuser()
{
}

 /**
     * Getters 
    */

/**
     *@brief Ver id
     */
long unsigned int Cuser::get_id() const
{
        return this -> id;
}

/**
     *@brief Ver edad
     */
unsigned int Cuser::get_age() const
{
        return this -> age;
}

/**
     *@brief Ver sexo
     */
std::string Cuser::get_sex() const
{
        return this -> sex;
}

/**
     *@brief Ver nombre
     */
std::string Cuser::get_name() const
{
        return this -> name;
}

/**
     *@brief Ver apellido
     */
std::string Cuser::get_lname() const
{
        return this -> lname;
}

/**
     *@brief Ver contraseña
     */
std::string Cuser::get_password()const
{

return this -> password;

}

    /**
     * Setters
    */

/**
     *@brief Cambiar nombre
     */
void Cuser::set_name(std::string str)
{
        if(this -> contains_number(str) == 0)
                this-> name = str;
}

/**
     *@brief Cambiar apellido
     */
void Cuser::set_lname(std::string str)
{
        if(this -> contains_number(str) == 0)
                this -> lname = str;
}

/**
     *@brief Cambiar edad
     */
void Cuser::set_age(unsigned int a)
{
        if(a<150)              
                this -> age = a;        
	
}

/**
     *@brief Cambair sexo
     */
void Cuser::set_sex(std::string s)
{
        if(s.find_first_of(("female") or ("FEMALE"))!= std::string::npos)
                this -> sex = "Female";
        
     else if(s.find_first_of(("male") or ("MALE"))!= std::string::npos)
        this -> sex = "Male";
}

/**
     *@brief Cambiar id
     */
void Cuser::set_id(long unsigned int i)
{
        if(i> 0)
                this -> id = i;
}

/**
     *@brief Cabiar contraseña
     */
void Cuser::set_password(std::string x)
{

if(x.size() >= 8)
{
if(x.find_first_of(" ")!= std::string::npos)
{
throw std::invalid_argument("the password can not have space");
}
else if ( x.find_first_of("0123456789") != std::string::npos)
{
        if(x.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") != std::string::npos)
        {
                if(x.find_first_of("!#$%&'()+,,-./:;<=>?@]\[_^`{|}~")!= std::string::npos)
                {
                        this -> password = x;
                }
                else
                {
                    throw std::invalid_argument("The password need at least one special character");
                }
        }
        else
        {
        throw std::invalid_argument("The password need at least one capital letter");
        }
}
else
{
throw std::invalid_argument("The password need at least one number");
}
}
else
{
throw std::domain_error("the password must be over 8 character");
}

}

///Verifica si la cadena tiene numeros
bool contains_number(const std::string &c)
{
        return (c.find_first_of("0123456789") != std::string::npos);
}
