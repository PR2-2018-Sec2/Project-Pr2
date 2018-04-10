

#include <iostream>
#include <automovil.h>
#include <assert.h>


/**
 * Constructors
*/

Automovil::Automovil(){}

Automovil::Automovil(const Automovil &u_car)
{
    this->Marca = u_car.get_Marca();
    this->Modelo = u_car.get_Modelo();
    this->Precio = u_car.get_Precio();
    this->Anio = u_car.get_Anio();
    this->Color = u_car.get_Color();
}

Automovil::Automovil(std::string u_Marca, std::string u_Modelo, std::string u_Placa, double u_Precio, double u_Kilometraje, unsigned int u_Anio, unsigned int u_Color)
{
    this->Marca = u_Marca;
    
    this->Modelo = u_Modelo;
    
    if(u_Placa.size() == 7 || u_Placa.size() == 8) this->Placa = u_Placa;
    else assert(0);
    
    if(u_Precio >= 1.00) this->Precio = u_Precio;
    else assert(0);
    
    if(u_Kilometraje >= 0.00) this->Kilometraje = u_Kilometraje;
    else assert(0);
    
    if(u_Anio >= 1850 && u_Anio <= 2018) this->Anio = u_Anio;
    else assert(0);
    
    if(u_Color >= 0 && u_Color <= 9) this->Color = u_Color;
    else assert(0);
}

Automovil::~Automovil(){}

/**
 * Getters
*/

std::string Automovil::get_Marca() const
{
    return this->Marca;
}

std::string Automovil::get_Modelo() const
{
    return this->Modelo;
}

std::string Automovil::get_Placa() const
{
    return this->Placa;
}

double Automovil::get_Precio() const
{
    return this->Precio;
}

double Automovil::get_Kilometraje() const
{
    return this->Kilometraje;
}

unsigned int Automovil::get_Anio() const
{
    return this->Anio;
}

unsigned int Automovil::get_Color() const
{
    return this->Color;
}

/**
 * Setters
*/

void Automovil::set_Placa(const std::string u_Placa)
{
   
    if(u_Placa.size() == 7 || u_Placa.size() == 8) this->Placa = u_Placa;
    else assert(0);
}
void Automovil::set_Precio(const double u_Precio)
{
    if(u_Precio >= 1.00) this->Precio = u_Precio;
    else assert(0);
}
void Automovil::set_Color(const unsigned int u_Color)
{
    if(u_Color >= 0 && u_Color <= 9) this->Color = u_Color;
    else assert(0);
}

Automovil& Automovil::operator=(const Automovil u_Automovil)
{
    this->Marca = u_Automovil.get_Marca();
    this->Modelo = u_Automovil.get_Modelo();
    this->Precio = u_Automovil.get_Precio();
    this->Anio = u_Automovil.get_Anio();
    this->Color = u_Automovil.get_Color();

    return (*this);
}
bool Automovil::operator==(const Automovil u_Automovil)
{
    if ( (this->Marca == u_Automovil.get_Marca())
    && (this->Modelo == u_Automovil.get_Modelo()) 
    && (this->Precio == u_Automovil.get_Precio())
    && (this->Anio == u_Automovil.get_Anio())
    && (this->Color == u_Automovil.get_Color()) ) return true;
    
    else return false;
}
