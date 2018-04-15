/**
 *  @file user.cpp
 *  @author Raul Rojas 
 *  @author Diego Benitez 
 *  @author Luis Hernandez 
 *  @author Gabriel Guerrero   
 *  @author Alberto Calderon.
 *  @date 5/3/2018
 *  \~Spanish @brief Definiciones para el TDA Cuser  \~English @brief Cuser definitions 
*/
#include <user.h>
#include <iostream>


/// \~Spanish @name Constructores
/// \~English @name Constructor

/// \~English @brief Default Constructor \~Spanish @brief Constructor por defecto
Cuser::Cuser ()
{
        this -> id=00000001;
        this -> name="NAME";
        this -> lname="LASTNAME";
        this -> age=19;
        this -> sex="";
        this -> password="NULL";
}

/// \~Spanish Constructor parametrico \~English Parametric constructor
/// \~Spanish @comment Inicializa el valor de id, nombre, apellido, edad, sexo, clave por medio de valores dados por el usuario. \~English @comment Set values id, name, last name, sex age and password
/// \~Spanish @param id Entero largo sin signo \~English @param id long int
/// \~Spanish @param name cadena \~English @param name string
/// \~Spanish @param lname cadena \~English @param lname cadena
/// \~Spanish @param age entero sin signo \~English @param lname unsigned int
/// \~Spanish @param sex cadena\~English @param sex string
/// \~Spanish @param password cadena \~English @param password cadena
Cuser::Cuser (long unsigned int a, std::string b, std::string c, unsigned int d, std::string e, std::string f)
{
	this -> set_id(a);
	this -> set_name(b);
	this -> set_lname(c);
	this -> set_age(d);
	this -> set_sex(e);
        this -> set_password(f);
}
/// \~Spanish @brief Constructor por copia  \~English @brief Copied constructor
/// \~Spanish @brief Inicializa el valor de id, nombre, apellido, edad, sexo, clave a partir de una copia del objeto Cautomobille. \~English @brief Set values id, name, last name, sex age and password
/// \~Spanish @&p objeto Cuser (copia) \~English @&u_car Cuser object copy 
Cuser::Cuser(const Cuser &p)
{
	this -> id = p.id;
	this -> name = p.name;
	this -> lname = p.lname;
	this -> age = p.age;
	this -> sex= p.sex;
        this -> password = p.password;
}

 /// \~Spanish @brief Destructor \~English @brief Destructor
Cuser::~Cuser(){}

/// \~Spanish @name Observadores 
///\~English @name Getters


/// \~Spanish @brief Ver id  \~English @brief Get id
/// \~Spanish @return id actual  \~English @return Current id
long unsigned int Cuser::get_id() const
{
        return this -> id;
}

/// \~Spanish @brief Ver edad  \~English @brief Get age
/// \~Spanish @return edad actual  \~English @return Current age
unsigned int Cuser::get_age() const
{
        return this -> age;
}

/// \~Spanish @brief Ver sexo  \~English @brief Get sex
/// \~Spanish @return sexo actual  \~English @return Current sex
std::string Cuser::get_sex() const
{
        return this -> sex;
}

/// \~Spanish @brief Ver nombre  \~English @brief Get name
/// \~Spanish @return Nombre actual  \~English @return Current name
std::string Cuser::get_name() const
{
        return this -> name;
}

/// \~Spanish @brief Ver apellido  \~English @brief Get last name
/// \~Spanish @return Apellido actual  \~English @return Current last name
std::string Cuser::get_lname() const
{
        return this -> lname;
}

/// \~Spanish @brief Ver clave  \~English @brief Get password
/// \~Spanish @return Clave actual  \~English @return Current password

std::string Cuser::get_password()const
{

return this -> password;

}

/// \~Spanish @name Actuadores
///\~English @name Setters


/// \~Spanish  @brief Cambiar nombre \~English @brief Changing nombre value
/// \~Spanish @param Cadena \~English @param String
void Cuser::set_name(std::string str)
{
        if(this -> contains_number(str) == 0)
                this-> name = str;
}

/// \~Spanish  @brief Cambiar apellido \~English @brief Changing lname value
/// \~Spanish @param Cadena \~English @param String
void Cuser::set_lname(std::string str)
{
        if(this -> contains_number(str) == 0)
                this -> lname = str;
}

/// \~Spanish  @brief Cambiar edad \~English @brief Changing age value
/// \~Spanish @param Entero sin signo \~English @param unsigned int
void Cuser::set_age(unsigned int a)
{
        if(a<150)              
                this -> age = a;        
	
}

/// \~Spanish  @brief Cambiar sexo \~English @brief Changing sex value
/// \~Spanish @param Cadena \~English @param String
void Cuser::set_sex(std::string s)
{
        if(s.find_first_of(("female") or ("FEMALE"))!= std::string::npos)
                this -> sex = "Female";
        
     else if(s.find_first_of(("male") or ("MALE"))!= std::string::npos)
        this -> sex = "Male";
}

/// \~Spanish  @brief Cambiar id \~English @brief Changing id value
/// \~Spanish @param Entero sin signo largo \~English @param long unsigned int
void Cuser::set_id(long unsigned int i)
{
        if(i> 0)
                this -> id = i;
}

/// \~Spanish  @brief Cambiar clave \~English @brief Changing password value
/// \~Spanish @param Cadena \~English @param String
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

/// \~Spanish  @brief Cadenas con numeros\~English @brief contains numbers
/// \~Spanish @param Cadena \~English @param String
bool contains_number(const std::string &c)
{
        return (c.find_first_of("0123456789") != std::string::npos);
}