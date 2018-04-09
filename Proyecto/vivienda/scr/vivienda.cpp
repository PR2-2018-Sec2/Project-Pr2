/**
 *  @name: Grupo vivienda
 *  @brief: Creacion de clase tipo vivienda
 * 
 * */

#include<vivienda.h>


///constructor por defecto

Vivienda::Vivienda(){

    this->nro_vivienda = 0;
    this->tipo_vivienda = "Casa";
    this->tamanio = 100;
    this->nro_habitaciones = 3;
    this->nro_banios = 2;
    this->nro_max_personas = 10;
    this->nro_estacionamiento = 2;
    this->estado = "Sin ocupar";
    this->valoracion = 1.00;
}
///constructor por parametros

Vivienda::Vivienda(const unsigned int a, const std::string b,const float c, const unsigned int d, const unsigned int e, const unsigned int f, const unsigned int g, const std::string h , const float i){
    this->nro_vivienda = a;
    this->tipo_vivienda = b;
    
    if(c<1000 or c>0) 
        this->tamanio = c;

    if(d>0 or d<30)
        this->nro_habitaciones = d;

    if(e>0 or d<20)
        this->nro_banios = e;

    if(f>0 or f<100)
        this->nro_max_personas = f;

    if(g>0 or g<30)
        this->nro_estacionamiento = g;

    this->estado = h;
   
    if(i>0)
        this->valoracion = i;

}

///Constructor por referencia

Vivienda::Vivienda(const Vivienda& p){
    this->nro_vivienda = p.nro_vivienda;
    this->tipo_vivienda = p.tipo_vivienda;
    this->tamanio = p.tamanio;
    this->nro_habitaciones = p.nro_habitaciones;
    this->nro_banios = p.nro_banios;
    this->nro_max_personas = p.nro_max_personas;
    this->nro_estacionamiento = p.nro_estacionamiento;
    this->estado = p.estado;
    this->valoracion = p.valoracion;

}
///destructor

Vivienda::~Vivienda(){}

///observadores

unsigned int Vivienda::get_numero_vivienda() const{
    return this->nro_vivienda;
}

std::string Vivienda::get_tipo_vivienda() const{
    return this->tipo_vivienda;
}

float Vivienda::get_tamanio() const{
    return this->tamanio;
}
unsigned int Vivienda::get_nro_habitacion() const{
    return this->nro_habitaciones;
}
unsigned int Vivienda::get_nro_banios() const{
    return this->nro_banios;
}
unsigned int Vivienda::get_nro_max_personas() const{
    return this->nro_max_personas;
}
unsigned int Vivienda::get_nro_estacionamiento() const{
    return this->nro_estacionamiento; 
}
std::string Vivienda::get_estado() const{
    return this->estado;
}
float Vivienda::get_valoracion() const{
    return this->valoracion;
}

///modificadores
void Vivienda::set_numero_vivienda(const unsigned int n){
    this->nro_vivienda = n;
}
void Vivienda::set_tipo_vivienda(const std::string n){
     this->tipo_vivienda = n;
}
void Vivienda::set_tamanio(const float n){
    if(n<1000 or n>0)
        this->tamanio = n;
}
void Vivienda::set_nro_habitacion(const unsigned int n){
    if(n>0 or n<30)
        this->nro_habitaciones = n;
}
void Vivienda::set_nro_banios(const unsigned int n){
    if(n>0 or n<20)
        this->nro_banios = n;
}
void Vivienda::set_nro_max_personas(const unsigned int n){
    if(n>0 or n<100)
        this->nro_max_personas = n;
}
void Vivienda::set_nro_estacionamiento(const unsigned int n){
    if(n>0 or n<30)
        this->nro_estacionamiento = n;
}
void Vivienda::set_estado(const std::string n){
    this->estado = n;
}
void Vivienda::set_valoracion(const unsigned int n){
    if(n>0)
        this->valoracion = n;
} 

