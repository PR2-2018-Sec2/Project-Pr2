/**
 *  @name: Group CHousing

 *  @members: Adolfo, Alejandro, Jorge, Cherry, Maria Fernanda
	
 *  @brief: Creation of class type Chousing

 *  @file: CHousing.cpp
 * 
 * */

#include <housing.h>


///Class constructors

    ///Default

CHousing::CHousing(){

    this->type_housing = "House";
    this->size = 100;
    this->state = "Undefined";
    this->valuation = 1.00;
    this->address = "Undefined";
    this->city = "Undefined";
}

    ///By parameters

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

    ///By reference

CHousing::CHousing(const CHousing& p){
    this->type_housing = p.type_housing;
    this->size = p.size;
    this->state = p.state;
    this->valuation = p.valuation;
    this->address = p.address;
    this->city = p.city;

}


///Observers


std::string CHousing::get_type_housing() const{
    return this->type_housing;
}

float CHousing::get_size() const{
    return this->size;
}

std::string CHousing::get_state() const{
    return this->state;
}
float CHousing::get_valuation() const{
    return this->valuation;
}
std::string CHousing::get_address() const{
    return this->address;
}
std::string CHousing::get_city() const{
    return this->city;
}

///Modifiers

void CHousing::set_type_housing(const std::string n){
     this->type_housing = n;
}
void CHousing::set_size(const float n){
    if(n<1000 or n>0)
        this->size = n;
}

void CHousing::set_state(const std::string n){
    this->state = n;
}
void CHousing::set_valuation(const unsigned int n){
    if(n>0)
        this->valuation = n;
} 
void CHousing::set_address(const std::string n){
     this->address = n;
}
void CHousing::set_city(const std::string n){
     this->city = n;
}
