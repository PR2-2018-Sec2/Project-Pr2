/**
 *  @name: Group Housing

 *  @members: Adolfo, Alejandro, Jorge, Cherry, Maria Fernanda
	
 *  @brief: Creation of class type housing

 *  @file: Housing.cpp
 * 
 * */

#include <housing.h>

int id = 1;

//Class constructors

    //Default

Housing::Housing(){

    this->num_Housing = id++;     //autoincrement Id
    this->type_Housing = "House";
    this->size = 100;
    this->num_bedrooms = 3;
    this->num_bathrooms = 2;
    this->max_num_people = 10;
    this->num_parking = 2;
    this->state = "Undefined";
    this->valuation = 1.00;
    this->address = "Undefined";
    this->city = "Undefined";
}

    //By parameters

Housing::Housing(const std::string b,const float c, const unsigned int d, const unsigned int e, const unsigned int f, const unsigned int g, const std::string h , const float i, const std::string j, const std::string k){
    
    this->num_Housing = id++;

    this->type_Housing = b;
    
    if(c<1000 or c>0) 
        this->size = c;

    if(d>0 or d<30)
        this->num_bedrooms = d;

    if(e>0 or d<20)
        this->num_bathrooms = e;

    if(f>0 or f<100)
        this->max_num_people = f;

    if(g>0 or g<30)
        this->num_parking = g;

    this->state = h;
   
    if(i>0)
        this->valuation = i;

    this->address = j;

    this->city = k;
    
}

    //By reference

Housing::Housing(const Housing& p){
    this->num_Housing = p.num_Housing;
    this->type_Housing = p.type_Housing;
    this->size = p.size;
    this->num_bedrooms = p.num_bedrooms;
    this->num_bathrooms = p.num_bathrooms;
    this->max_num_people = p.max_num_people;
    this->num_parking = p.num_parking;
    this->state = p.state;
    this->valuation = p.valuation;
    this->address = p.address;
    this->city = p.city;

}

//Class destructor


//Observers

unsigned int Housing::get_num_Housing() const{
    return this->num_Housing;
}

std::string Housing::get_type_Housing() const{
    return this->type_Housing;
}

float Housing::get_size() const{
    return this->size;
}
unsigned int Housing::get_num_bedrooms() const{
    return this->num_bedrooms;
}
unsigned int Housing::get_num_bathrooms() const{
    return this->num_bathrooms;
}
unsigned int Housing::get_max_num_people() const{
    return this->max_num_people;
}
unsigned int Housing::get_num_parking() const{
    return this->num_parking; 
}
std::string Housing::get_state() const{
    return this->state;
}
float Housing::get_valuation() const{
    return this->valuation;
}
std::string Housing::get_address() const{
    return this->address;
}
std::string Housing::get_city() const{
    return this->city;
}

//Modifiers

void Housing::set_num_Housing(const int n){     //Optional modifier made for special use cases, sets the Id of the housing unit
    if(n>0)
        this->num_Housing = n;

}
void Housing::set_type_Housing(const std::string n){
     this->type_Housing = n;
}
void Housing::set_size(const float n){
    if(n<1000 or n>0)
        this->size = n;
}
void Housing::set_num_bedrooms(const unsigned int n){
    if(n>0 or n<30)
        this->num_bedrooms = n;
}
void Housing::set_num_bathrooms(const unsigned int n){
    if(n>0 or n<20)
        this->num_bathrooms = n;
}
void Housing::set_max_num_people(const unsigned int n){
    if(n>0 or n<100)
        this->max_num_people = n;
}
void Housing::set_num_parking(const unsigned int n){
    if(n>0 or n<30)
        this->num_parking = n;
}
void Housing::set_state(const std::string n){
    this->state = n;
}
void Housing::set_valuation(const unsigned int n){
    if(n>0)
        this->valuation = n;
} 
void Housing::set_address(const std::string n){
     this->address = n;
}
void Housing::set_city(const std::string n){
     this->city = n;
}
