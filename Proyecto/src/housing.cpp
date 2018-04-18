
/**
 * @file housing.cpp
 * @date 10/04/2018
 * @author Mafer Guerrero
 * @email mariafernandaguerrero.25@gmail.com
 * @author Adolfo Ramirez
 * @author Cherry Gota
 * @author Jose Rivera
 * @author Jorge Carrero
 * \~Spanish @brief Definiciones para el TDA CHousing  \~English @brief CHousing definitions
*/

#include <housing.h>

/// \~Spanish @name Constructores 
/// \~English @name Constructor

/// \~English @brief Default Constructor \~Spanish @brief Constructor por defecto

CHousing::CHousing(){

    this->type_housing = "House";
    this->size = 100;
    this->state = "Undefined";
    this->valuation = 1.00;
    this->address = "Undefined";
    this->city = "Undefined";
}
/// \~English Parametric Constructor \~Spanish Constructor parametrico
/// \~English @comment Set values of type, size,state, valuaton, addres and city \~Spanish @comment Cambia las variables de tipo, tamaño, estado, valoracion, direccion y ciudad
/// \~English @param type string \~Spanish @param Tipo cadena 
/// \~English @param size float \~Spanish @param Tamaño flotante
/// \~English @param state string \~Spanish @param Estado cadena
/// \~English @param valuation float \~Spanish @param Valoracion flotante
/// \~English @param address string \~Spanish @param Direccion cadena
/// \~English @param city string \~Spanish @param Ciuedad cadena

CHousing::CHousing(const std::string b, const float c, const std::string h , const float i, const std::string j, const std::string k){
    

    this->type_housing = b;
    
    if(c<9000 or c>0) 
        this->size = c;

    this->state = h;
   
    if(i>0)
        this->valuation = i;

    this->address = j;

    this->city = k;
    
}
/// \~English @brief Copied Constructor \~Spanish @brief  Constructor por copia
/// \~English @comment Set values of type, size,state, valuaton, addres and city from a copy of the object CHousing.\~Spanish @brief Inicializa los valores de tipo,tamaño,estado, valoracion, direccion y ciudad de una copia del objecto CHousing
/// \~English @&p objet CHousing (copy) \~Spanish @&p objeto CHousing (copia)

CHousing::CHousing(const CHousing& p){
    this->type_housing = p.type_housing;
    this->size = p.size;
    this->state = p.state;
    this->valuation = p.valuation;
    this->address = p.address;
    this->city = p.city;

}

/// \~Spanish @name Observadores 
///\~English @name Getters

/// \~English @brief get type  \~Spanish @brief Ver tipo 
/// \~English @return Current type  \~Spanish @return Tipo actual


std::string CHousing::get_type_housing() const{
    return this->type_housing;
}

/// \~English @brief get size  \~Spanish @brief Ver tamaño 
/// \~English @return Current size  \~Spanish @return Tamaño actual

float CHousing::get_size() const{
    return this->size;
}

/// \~English @brief get state  \~Spanish @brief Ver estado 
/// \~English @return Current state  \~Spanish @return Estado actual

std::string CHousing::get_state() const{
    return this->state;
}
/// \~English @brief get valuation  \~Spanish @brief Ver valoracion 
/// \~English @return Current valuation  \~Spanish @return Valoracion actual

float CHousing::get_valuation() const{
    return this->valuation;
}
/// \~English @brief get address  \~Spanish @brief Ver direccion 
/// \~English @return Current address  \~Spanish @return Direccion actual

std::string CHousing::get_address() const{
    return this->address;
}

/// \~English @brief get city  \~Spanish @brief Ver ciudad 
/// \~English @return Current city  \~Spanish @return Ciudad actual
std::string CHousing::get_city() const{
    return this->city;
}


/// \~Spanish @name Actuadores 
///\~English @name Setters

/// \~English @brief Changing type value \~Spanish @brief Cambiar tipo
/// \~English @param String \~Spanish @param Cadena

void CHousing::set_type_housing(const std::string n){
     this->type_housing = n;
}
/// \~English @brief Changing size value \~Spanish @brief Cambiar tamaño
/// \~English @param float \~Spanish @param flotante

void CHousing::set_size(const float n){
    if(n<1000 or n>0)
        this->size = n;
}
/// \~English @brief Changing state value \~Spanish @brief Cambiar estado
/// \~English @param String \~Spanish @param Cadena

void CHousing::set_state(const std::string n){
    this->state = n;
}
/// \~English @brief Changing valuation value \~Spanish @brief Cambiar valoracion
/// \~English @param float \~Spanish @param floatante
void CHousing::set_valuation(const float n){
    if(n>0)
        this->valuation = n;
} 
/// \~English @brief Changing address value \~Spanish @brief Cambiar direccion
/// \~English @param String \~Spanish @param Cadena
void CHousing::set_address(const std::string n){
     this->address = n;
}
/// \~English @brief Changing city value \~Spanish @brief Cambiar ciudad
/// \~English @param String \~Spanish @param Cadena
void CHousing::set_city(const std::string n){
     this->city = n;
}

/// \~Spanish @name Sobrecarga de operadores  
///\~English @name Operator's overload

/// \~Spanish @brief Sobrecarga del operador = \~English @brief Operator overload =
/// \~Spanish @param Objeto CHousing \~English @param CHousing object
/// \~Spanish @return Referencia a un objeto CHousing \~English @return CHousing reference
CHousing CHousing::operator=(const CHousing& p){
    this->type_housing = p.type_housing;
    this->size = p.size;
    this->state = p.state;
    this->valuation = p.valuation;
    this->address = p.address;
    this->city = p.city;
    return (*this);
}
/// \~Spanish @brief Sobrecarga del operador == \~English @brief Operator overload ==
/// \~Spanish @param Objeto CHousing \~English @param CHousing object
/// \~Spanish @return TRUE or FALSE \~English @return TRUE or FALSE
bool CHousing::operator==(const CHousing& p){;
    return((this->type_housing == p.get_type_housing()) 
           and (this->size == p.get_size()) 
           and (this->state == p.get_state()) 
           and (this->valuation == p.get_valuation())
           and (this->address == p.get_address())
           and(this->city == p.get_address()) ) ;
}
