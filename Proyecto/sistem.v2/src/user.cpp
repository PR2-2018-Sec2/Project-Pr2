/**
 *  @file user.cpp
 *  @author's Raul Rojas, Diego Benitez, Luis Hernandez, Gabriel Guerrero, Alberto Calderon.
 *  @Date 5/3/2018
 *  @brief Definiciones para el TDA Cuser
*/
#include <user.h>
#include <iostream>

//Constructor por defectos
Cuser::Cuser ()
{
        this -> id=00000001;
        this -> name="NAME";
        this -> lname="LASTNAME";
        this -> age=19;
        this -> sex=1;
}

///Constructor por parametros
Cuser::Cuser (long unsigned int a, std::string b, std::string c, unsigned int d, unsigned int e)
{
	this -> set_id(a);
	this -> set_name(b);
	this -> set_lname(c);
	this -> set_age(d);
	this -> set_sex(e);
}

///Constructor por copia
Cuser::Cuser(const Cuser &p)
{
	this -> id = p.id;
	this -> name = p.name;
	this -> lname = p.lname;
	this -> age = p.age;
	this -> sex= p.sex;
}

///Destructor
Cuser::~Cuser()
{
}

///Observadores

///Ver cedula
long unsigned int Cuser::get_id() const
{
        return this -> id;
}

///Ver edad
unsigned int Cuser::get_age() const
{
        return this -> age;
}

///Ver sexo
std::string Cuser::get_sex() const
{
        return this -> sex;
}

///Ver nombre
std::string Cuser::get_name() const
{
        return this -> name;
}

///Ver apellido
std::string Cuser::get_lname() const
{
        return this -> lname;
}

///Modificadores

///Cambiar nombre
void Cuser::set_name(std::string str)
{
        if(this -> contains_number(str) == 0)
                this-> name = str;
}

///Cambiar apellido
void Cuser::set_lname(std::string str)
{
        if(this -> contains_number(str) == 0)
                this -> lname = str;
}

///Cambiar edad
void Cuser::set_age(unsigned int a)
{
        if(a<150)              
                this -> age = a;        
	
}

///Cambiar sexo
void Cuser::set_sex(unsigned int s)
{
        if(s == 0)
                this -> sex = "Female";
        
        else if(s == 1)
        this -> sex = "Male";
}

///Cambiar id
void Cuser::set_id(long unsigned int i)
{
        if(i> 0)
                this -> id = i;
}

///Verifica si la cadena tiene numeros
bool Cuser::contains_number(const std::string &c)
{
        return (c.find_first_of("0123456789") != std::string::npos);
}

