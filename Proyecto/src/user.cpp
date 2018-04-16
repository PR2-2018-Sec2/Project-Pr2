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
 * @brief Constructor por defecto 
*/
Cuser::Cuser ()
{
        this -> id=00000001;
        this -> name="NAME";
        this -> lname="LASTNAME";
        this -> age=19;
        this -> sex='O';
        this -> password="NULL";
}

/**
  * @brief Constructor parametrizado
  * @comment Inicializa el valor de id, name, last name, age, sex y password por medio de valores dados por el usuario.
  * @param u_id Long unsigned int
  * @param u_name Cadena de caracteres
  * @param u_lname Cadena de caracteres
  * @param u_age Unsigned int
  * @param u_lsex Char
  * @param u_set_password Cadena de caracteres que debe incluir al menos un caracter especial, un numero y mayuscula. 
*/
Cuser::Cuser (long unsigned int a, std::string b, std::string c, unsigned int d, char e, std::string f)
{
	this -> set_id(a);
	this -> set_name(b);
	this -> set_lname(c);
	this -> set_age(d);
	this -> set_sex(e);
        this -> set_password(f);
}
/**
 * @brief Constructor por copia
 * @comment Inicializa el valor de id, name, last name, age, sex y password a partir de un objeto Cuser.
 * @&u_p objeto Cuser (copia)
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
 * @brief Destructor
*/
Cuser::~Cuser()
{
}

/**
 * Getters 
*/

/**
 * @brief Obtener la id actual.
 * @return Un objeto Cuser, con la id actual.
*/
long unsigned int Cuser::get_id() const
{
        return this -> id;
}

/**
 * @brief Obtener la age actual.
 * @return Un objeto Cuser, con la age actual.
*/
unsigned int Cuser::get_age() const
{
        return this -> age;
}

/**
 * @brief Obtener el sex actual.
 * @return Un objeto Cuser, con el sex actual.
*/
char Cuser::get_sex() const
{
        return this -> sex;
}

/**
 * @brief Obtener el name actual.
 * @return Un objeto Cuser, con el name actual.
*/
std::string Cuser::get_name() const
{
        return this -> name;
}

/**
 * @brief Obtener el lname actual.
 * @return Un objeto Cuser, con el lname actual.
*/
std::string Cuser::get_lname() const
{
        return this -> lname;
}

/**
 * @brief Obtener la password actual.
 * @return Un objeto Cuser, con la password actual.
*/
std::string Cuser::get_password()const
{

return this -> password;

}

/**
 * Setters
*/

/**
 * @brief set_name Modifica el valor de name
 * @param u_name Cadena de caracteres
*/
void Cuser::set_name(std::string str)
{
        if(this -> contains_number(str) == 0)
                this-> name = str;
}

/**
 * @brief set_lname Modifica el valor de lname
 * @param u_lname Cadena de caracteres
*/
void Cuser::set_lname(std::string str)
{
        if(this -> contains_number(str) == 0)
                this -> lname = str;
}

/**
 * @brief set_age Modifica el valor de age
 * @param u_age Unsigned int
*/
void Cuser::set_age(unsigned int a)
{
        if(a<150)              
                this -> age = a;        
	
}

/**
 * @brief set_sex Modifica el valor de sex
 * @param u_sex Char
*/
void Cuser::set_sex(char s)
{
        if((s == 'M') || (s == 'F') || (s == 'O'))
        this -> sex = s;
}

/**
 * @brief set_id Modifica el valor de id
 * @param u_id Long unsigned int
*/      
void Cuser::set_id(long unsigned int i)
{
        if(i> 0)
                this -> id = i;
}

/**
 * @brief set_password Modifica el valor de password
 * @param u_password Cadena de caracteres
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

/**
 * @brief contains_number Verifica si la cadena tiene numeros
*/
bool Cuser::contains_number(const std::string &c)
{
        return (c.find_first_of("0123456789") != std::string::npos);
}

/**
 * @brief sobrecarga del operador = 
 * @param objeto Cuser
 * @return objeto Cuser
*/
Cuser& Cuser::operator=(const Cuser aux_Cuser)
{
    this-> id = aux_Cuser.get_id();
    this-> name = aux_Cuser.get_name();
    this-> lname = aux_Cuser.get_lname();
    this-> age = aux_Cuser.get_age();
    this-> sex = aux_Cuser.get_sex();
    this -> password = aux_Cuser.get_password();

    return (*this);
}
/**
 * @brief sobrecarga del operador == 
 * @param objeto Cuser
 * @return TRUE or False
*/
bool Cuser::operator==(const Cuser aux_Cuser)
{
    Cuser aux = *this;
    return(aux.get_name() == aux_Cuser.get_name())
           and (aux.get_lname() == aux_Cuser.get_lname()) 
           and (aux.get_age() == aux_Cuser.get_age()) 
           and (aux.get_sex() == aux_Cuser.get_sex())
           and (aux.get_password() == aux_Cuser.get_password());
}