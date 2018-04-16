/**
 * @file Cautomobille.cpp
 * @date 10/04/2018
 * @authors Rafael Rivas, Samuel Aranda, Oriana Pedroza, Jeremy Roa, Laura Rosales
 * @note Emails
 * @note -ingrafaelrivascalderon@gmail.com
 * @note -jmra0611@gmail.com
 * @note -oriana.p@ula.ve
 * @brief Implementación de objeto Cautomobile
*/
#include <iostream>
#include <automobile.h>


/**
 * Constructores
*/

/**
  *@brief Constructor por defecto
  */
Cautomobile::Cautomobile(){
    this->brand = "NULL";
    this->price = 0;
    this->model = "NULL";
    this->year = 0;
    this->lin_plate = "ABCDEFG";
}
 /**
   * @brief Constructor por copia 
   * @comment inicializa el valor de brand, price, model, year, lin_plate a partir de una copia del objeto Cautomobille.
   * @&u_car objeto Cautomobile (copia)
   */
Cautomobile::Cautomobile(const Cautomobile &u_car)
{
    this->brand = u_car.get_brand();
    this->price = u_car.get_price();
    this->model = u_car.get_model();
    this->year = u_car.get_year();
}
 /**
   * @brief Constructor parametrizado 
   * @comment Inicializa el valor de brand, price, model, year, lin_plate por medio de valores dados por el usuario.
   * @param u_brand Cadena de caracteres
   * @param u_price Número de 1.00 en adelante
   * @param u_model Cadena de caracteres
   * @param u_year Año que va desde 1850 hasta 2018
   * @param u_lin_plate Cadena de caracteres de longitud 7
   */
Cautomobile::Cautomobile(std::string u_brand,double u_price,std::string u_model,unsigned int u_year, std::string u_lin_plate)
{
    this->set_brand(u_brand);
    this->set_price(u_price);
    this->set_model(u_model);
    this->set_year(u_year);
    this->set_lin_plate(u_lin_plate);
}

/**
 * Getters
*/

/**
* @brief Obtener la brand actual.
* @return Un objeto Cautomobille, con la brand actual.
*/
std::string Cautomobile::get_brand() const
{
    return this->brand;
}
/**
* @brief Obtener el price actual.
* @return Un objeto Cautomobille, con el price actual.
*/
double Cautomobile::get_price() const
{
    return this->price;
}
/**
* @brief Obtener la brand actual.
* @return Un objeto Cautomobille, con la brand actual.
*/
std::string Cautomobile::get_model() const
{
    return this->model;
}
/**
* @brief Obtener el año actual.
* @return Un objeto Cautomobile, con el año actual.
*/
unsigned int Cautomobile::get_year() const
{
    return this->year;
}
/**
* @brief Obtener la lin_plate actual.
* @return Un objeto Cautomobile, con la lin_plate actual.
*/
std::string Cautomobile::get_lin_plate() const
{
    return this->lin_plate;
}


/**
 * Setters
*/


/**
  *@brief set_brand Modifica el valor de brand
  *@param u_brand Cadena de caracteres
*/
void Cautomobile::set_brand(const std::string u_brand)
{
    this->brand = u_brand;
}


/**
   *@brief set_price Modifica el valor de price
   *@param u_price Número de doble precisión
  */
void Cautomobile::set_price(const double u_price)
{
    if(u_price >= 1.00) this->price = u_price;
    else throw std::domain_error("Price is negative or zero");
}

/**
  *@brief set_model Modifica el valor de model
  *@param u_model Cadena de caracteres
*/
void Cautomobile::set_model(const std::string u_model)
{
    this->model = u_model;
} 

/**
  *@brief set_year Modifica el valor de year y mayor a 1850
  *@param u_year Número de entero sin signo
*/
void Cautomobile::set_year(const unsigned int u_year){
    if((u_year >= 1850) && (u_year <= 2018)) this->year = u_year;
    else throw std::domain_error("Invalided year");
}

/**
  *@brief set_lin_plate Modifica el valor de lin_plate
  *@param u_lin_plate Cadena de caracteres
  */
void Cautomobile::set_lin_plate(const std::string u_lin_plate)
{
    if(u_lin_plate.size() == 7 ) this->lin_plate = u_lin_plate;
    else throw std::invalid_argument("Incorrect lin plate");
}

/**
  *@brief sobrecarga del operador = 
  *@param objeto Cautomobile
  *@return objeto Cautomobile
  */
Cautomobile& Cautomobile::operator=(const Cautomobile u_Cautomobile)
{
    this->brand = u_Cautomobile.get_brand();
    this->price = u_Cautomobile.get_price();
    this->model = u_Cautomobile.get_model();
    this->year = u_Cautomobile.get_year();

    return (*this);
}
/**
  *@brief sobrecarga del operador == 
  *@param objeto Cautomobille
  *@return TRUE or False
  */
bool Cautomobile::operator==(const Cautomobile u_Cautomobile)
{
    Cautomobile aux = *this;
    return((aux.get_brand() == u_Cautomobile.get_brand()) 
           and (aux.get_price() == u_Cautomobile.get_price()) 
           and (aux.get_model() == u_Cautomobile.get_model()) 
           and (aux.get_year() == u_Cautomobile.get_year()));
}


