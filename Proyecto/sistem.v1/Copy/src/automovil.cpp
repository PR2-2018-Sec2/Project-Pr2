/**
 * @file automovil.cpp
 * @date 08/04/2018
 * @authors Rafael Rivas, Samuel Aranda, Oriana Pedroza, Jeremy Roa, Laura Rosales
 * @email ingrafaelrivascalderon@gmail.com
 * @brief Implementación de objeto Automovil
*/
#include <iostream>
#include <automovil.h>
#include <assert.h>


/**
 * Constructors
*/

/**
  *@brief Constructor por defecto
  */
CAutomovil::CAutomovil(){}
 /**
   * @brief Constructor por copia 
   * @comment inicializa el valor de la brand, model, lin_plate, price, mileage, year, color a partir de una copia del objeto automovil.
   * @&u_car objeto automovil (copia)
   */
CAutomovil::CAutomovil(const CAutomovil &u_car)
{
    this->brand = u_car.get_brand();
    this->model = u_car.get_model();
    this->price = u_car.get_price();
    this->year = u_car.get_year();
    this->color = u_car.get_color_num();
}
 /**
   * @brief Constructor parametrizado 
   * @comment Inicializa el valor de la brand, model, lin_plate, price, mileage, year, color.
   * @param u_brand Cadena de caracteres
   * @param u_model Cadena de caracteres
   * @param u_lin_plate Cadena de caracteres de longitud 7 u 8
   * @param u_price Número de 1.00 en adelante
   * @param u_mileage Número de 0 en adelante
   * @param u_year Año que va desde 1850 hasta 2018
   * @param u_color Número desde el 0 hasta el 9
   */
CAutomovil::CAutomovil(std::string u_brand, std::string u_model, std::string u_lin_plate, double u_price, double u_mileage, unsigned int u_year, unsigned int u_color)
{
    this->brand = u_brand;
    
    this->model = u_model;
    
    if(u_lin_plate.size() == 7 ) this->lin_plate = u_lin_plate;
    else assert(0);
    
    if(u_price >= 1.00) this->price = u_price;
    else assert(0);
    
    if(u_mileage >= 0.00) this->mileage = u_mileage;
    else assert(0);
    
    if(u_year >= 1850 && u_year <= 2018) this->year = u_year;
    else assert(0);
    
    if(u_color >= 0 && u_color <= 9) this->color = u_color;
    else assert(0);
}

CAutomovil::~CAutomovil(){}

/**
 * Getters
*/

/**
* @brief Obtener la brand actual.
* @return Un objeto automovil, con la brand actual.
*/
std::string CAutomovil::get_brand() const
{
    return this->brand;
}
/**
* @brief Obtener la brand actual.
* @return Un objeto automovil, con la brand actual.
*/
std::string CAutomovil::get_model() const
{
    return this->model;
}
/**
* @brief Obtener la lin_plate actual.
* @return Un objeto automovil, con la lin_plate actual.
*/
std::string CAutomovil::get_lin_plate() const
{
    return this->lin_plate;
}
/**
* @brief Obtener el price actual.
* @return Un objeto automovil, con el price actual.
*/
double CAutomovil::get_price() const
{
    return this->price;
}
/**
* @brief Obtener el mileage actual.
* @return Un objeto automovil, con el mileage actual.
*/
double CAutomovil::get_mileage() const
{
    return this->mileage;
}
/**
* @brief Obtener el año actual.
* @return Un objeto automovil, con el año actual.
*/
unsigned int CAutomovil::get_year() const
{
    return this->year;
}
/**
* Obtener el color actual.
* @return Un objeto automovil, con el color actual.
*/
std::string CAutomovil::get_color() const
{
    switch(this->color)
    {
        case 0: return "Negro";
        case 1: return "Rojo";
        case 2: return "Verde";
        case 3: return "Azul";
        case 4: return "Rosado";
        case 5: return "Amarillo";
        case 6: return "Marron";
        case 7: return "Morado";
        case 8: return "Naranja";
        case 9: return "Blanco";
    }
}

/**
* Obtener el valor del color actual.
* @return Un objeto automovil, con el valor del color actual.
*/

unsigned int CAutomovil::get_color_num() const
{
    return this->color;
}

/**
 * Setters
*/

/**
  *@brief set_lin_plate Modifica el valor de lin_plate
  *@param u_lin_plate Cadena de caracteres
  */
void CAutomovil::set_lin_plate(const std::string u_lin_plate)
{
   
    if(u_lin_plate.size() == 7 ) this->lin_plate = u_lin_plate;
    else assert(0);
}
/**
   *@brief set_price Modifica el valor de price
   *@param u_price Número de doble precisión
  */
void CAutomovil::set_price(const double u_price)
{
    if(u_price >= 1.00) this->price = u_price;
    else assert(0);
}
/**
   *@brief set_color Modifica el valor de color
   *@param u_color Número entero sin signo
  */
void CAutomovil::set_color(const unsigned int u_color)
{
    if(u_color >= 0 && u_color <= 9) this->color = u_color;
    else assert(0);
}

/**
  *@brief sobrecarga del operador = 
  *@param objeto automovil
  *@return objeto automovil
  */
CAutomovil& CAutomovil::operator=(const CAutomovil u_Automovil)
{
    this->brand = u_Automovil.get_brand();
    this->model = u_Automovil.get_model();
    this->price = u_Automovil.get_price();
    this->year = u_Automovil.get_year();
    this->color = u_Automovil.get_color_num();

    return (*this);
}
/**
  *@brief sobrecarga del operador == 
  *@param objeto automovil
  *@return TRU or False
  */
bool CAutomovil::operator==(const CAutomovil u_Automovil)
{
    if ( (this->brand == u_Automovil.get_brand())
    && (this->model == u_Automovil.get_model()) 
    && (this->price == u_Automovil.get_price())
    && (this->year == u_Automovil.get_year())
    && (this->color == u_Automovil.get_color_num()) ) return true;
    
    else return false;
}


