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
#include <qdebug.h>

bool search_numbers_2(std::string str){
    int size = str.size();
    for(int i = 0; i < size;i++){
            if(!std::isdigit(str[i])){
                return false;
            }
    }
    return true;

}
/// \~Spanish @name Constructores
/// \~English @name Constructor

/// \~English @brief Default Constructor \~Spanish @brief Constructor por defecto
Cuser::Cuser()
{
        this->id = "12345678";
        this->name = "NAME";
        this->lname = "LASTNAME";
        this->age = 19;
        this->sex = '0';
        this->password = "NULL";
}

/// \~Spanish Constructor parametrico \~English Parametric constructor
/// \~Spanish @comment Inicializa el valor de id, nombre, apellido, edad, sexo, clave por medio de valores dados por el usuario. \~English @comment Set values id, name, last name, sex age and password
/// \~Spanish @param id Entero largo sin signo \~English @param id long int
/// \~Spanish @param name cadena \~English @param name string
/// \~Spanish @param lname cadena \~English @param lname cadena
/// \~Spanish @param age entero sin signo \~English @param lname unsigned int
/// \~Spanish @param sex cadena\~English @param sex string
/// \~Spanish @param password cadena \~English @param password cadena
Cuser::Cuser(std::string a, std::string b, std::string c, unsigned int d, char e, std::string f)
{
        this->set_id(a);
        this->set_name(b);
        this->set_lname(c);
        this->set_age(d);
        this->set_sex(e);
        this->set_password(f);
}
/// \~Spanish @brief Constructor por copia  \~English @brief Copied constructor
/// \~Spanish @brief Inicializa el valor de id, nombre, apellido, edad, sexo, clave a partir de una copia del objeto Cautomobille. \~English @brief Set values id, name, last name, sex age and password
/// \~Spanish @&p objeto Cuser (copia) \~English @&u_car Cuser object copy
Cuser::Cuser(const Cuser &p)
{
        this->id = p.id;
        this->name = p.name;
        this->lname = p.lname;
        this->age = p.age;
        this->sex = p.sex;
        this->password = p.password;
}

/// \~Spanish @brief Destructor \~English @brief Destructor
Cuser::~Cuser() {}

/// \~Spanish @name Observadores
///\~English @name Getters

/// \~Spanish @brief Ver id  \~English @brief Get id
/// \~Spanish @return id actual  \~English @return Current id
std::string Cuser::get_id() const
{
        return this->id;
}

/// \~Spanish @brief Ver edad  \~English @brief Get age
/// \~Spanish @return edad actual  \~English @return Current age
unsigned int Cuser::get_age() const
{
        return this->age;
}

/// \~Spanish @brief Ver sexo  \~English @brief Get sex
/// \~Spanish @return sexo actual  \~English @return Current sex
char Cuser::get_sex() const
{
        return this->sex;
}

/// \~Spanish @brief Ver nombre  \~English @brief Get name
/// \~Spanish @return Nombre actual  \~English @return Current name
std::string Cuser::get_name() const
{
        return this->name;
}

/// \~Spanish @brief Ver apellido  \~English @brief Get last name
/// \~Spanish @return Apellido actual  \~English @return Current last name
std::string Cuser::get_lname() const
{
        return this->lname;
}

/// \~Spanish @brief Ver clave  \~English @brief Get password
/// \~Spanish @return Clave actual  \~English @return Current password

std::string Cuser::get_password() const
{

        return this->password;
}

/// \~Spanish @name Actuadores
///\~English @name Setters

/// \~Spanish  @brief Cambiar nombre \~English @brief Changing nombre value
/// \~Spanish @param Cadena \~English @param String
int Cuser::set_name(std::string str)
{
        if (this->contains_number(str) == 0)
        {
            this->name = str;
            return 0;
        }

        return 1;

}

/// \~Spanish  @brief Cambiar apellido \~English @brief Changing lname value
/// \~Spanish @param Cadena \~English @param String
int Cuser::set_lname(std::string str)
{
        if (this->contains_number(str) == 0)
        {
            this->lname = str;
            return 0;
        }

        return 1;

}

/// \~Spanish  @brief Cambiar edad \~English @brief Changing age value
/// \~Spanish @param Entero sin signo \~English @param unsigned int
int Cuser::set_age(unsigned int a)
{
        if (a < 150)
        {
            this->age = a;
            return 0;
        }

        return 1;

}

/// \~Spanish  @brief Cambiar sexo \~English @brief Changing sex value
/// \~Spanish @param Cadena \~English @param String
int Cuser::set_sex(char s)
{
        if ((s == 'M') || (s == 'F') || (s == 'O'))
        {
            this->sex = s;
            return 0;
        }

        return 1;

}

/// \~Spanish  @brief Cambiar id \~English @brief Changing id value
/// \~Spanish @param Entero sin signo largo \~English @param std::string
int Cuser::set_id(std::string i)
{
        if ((i.size() == 8) && (search_numbers_2(i))){
                this->id = i;
                return 0;
        }
        else
        {
            return -1;
        }
}

/// \~Spanish  @brief Cambiar clave \~English @brief Changing password value
/// \~Spanish @param Cadena \~English @param String
int Cuser::set_password(std::string x)
{

        if (x.size() == 8)
        {
                if (x.find_first_of(" ") != std::string::npos)
                {
                        return 1;//throw std::invalid_argument("the password can not have space");
                }
                else if (x.find_first_of("0123456789") != std::string::npos)
                {
                        if (x.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") != std::string::npos)
                        {
                                if (x.find_first_of("!#$%&'()+,,-./:;<=>?@]\[_^`{|}~") != std::string::npos)
                                {
                                        this->password = x;
                                        return 0;
                                }
                                else
                                {
                                        return 2;//throw std::invalid_argument("The password need at least one special character");
                                }
                        }
                        else
                        {
                                return 3;//throw std::invalid_argument("The password need at least one capital letter");
                        }
                }
                else
                {
                        return 4;//throw std::invalid_argument("The password need at least one number");
                }
        }
        else
        {
                return 5;//throw std::domain_error("the password must be over 8 character");
        }
}

/// \~Spanish  @brief Cadenas con numeros\~English @brief contains numbers
/// \~Spanish @param Cadena \~English @param String
bool Cuser::contains_number(const std::string &c)
{
        return (c.find_first_of("0123456789") != std::string::npos);
}

/// \~Spanish @name Sobrecarga de operadores
///\~English @name Operator's overload

/// \~Spanish @brief Sobrecarga del operador = \~English @brief Operator overload =
/// \~Spanish @param Objeto Cuser \~English @param Cuser object
/// \~Spanish @return Referencia a un objeto Cuser \~English @return Cuser reference
Cuser &Cuser::operator=(const Cuser aux_Cuser)
{
        this->id = aux_Cuser.get_id();
        this->name = aux_Cuser.get_name();
        this->lname = aux_Cuser.get_lname();
        this->age = aux_Cuser.get_age();
        this->sex = aux_Cuser.get_sex();
        this->password = aux_Cuser.get_password();

        return (*this);
}

/// \~Spanish @brief Sobrecarga del operador == \~English @brief Operator overload ==
/// \~Spanish @param Objeto Cuser \~English @param Cuser object
/// \~Spanish @return TRUE or FALSE \~English @return TRUE or FALSE

bool Cuser::operator==(const Cuser aux_Cuser)
{
        Cuser aux = *this;
        return (aux.get_name() == aux_Cuser.get_name()) and (aux.get_lname() == aux_Cuser.get_lname()) and (aux.get_age() == aux_Cuser.get_age()) and (aux.get_sex() == aux_Cuser.get_sex()) and (aux.get_password() == aux_Cuser.get_password());
}
