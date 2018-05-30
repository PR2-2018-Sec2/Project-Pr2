
/**
 * @file automobile.cpp
 * @date 10/04/2018
 * @author Rafael Rivas
 * @email ingrafaelrivascalderon@gmail.com
 * @author Jeremy Roa
 * @email jmra0611@gmail.com
 * @author Oriana Pedroza
 * @email ingrafaelrivascalderon@gmail.com
 * @author Samuel Aranda
 * @email ingrafaelrivascalderon@gmail.com
 * @author Laura Rosales
 * @email ingrafaelrivascalderon@gmail.com
 * \~Spanish @brief Definiciones para el TDA Cautomobile  \~English @brief Cautomobile definitions
*/
#include <iostream>
#include <automobile.h>

/// \~Spanish @name Constructores 
/// \~English @name Constructor


/// \~English @brief Default Constructor \~Spanish @brief Constructor por defecto

Cautomobile::Cautomobile(){
    this->brand = "NULL";
    this->price = 0;
    this->model = "NULL";
    this->year = 0;
    this->lin_plate = "ABCDEFG";
}

/// \~Spanish @brief Constructor por copia  \~English @brief Copied constructor
/// \~Spanish @comment Inicializa el valor de marca, precio, modelo, año, placa a partir de una copia del objeto Cautomobille. \~English @comment Set values of brand, price, model, year, lin_plate from a copy
/// \~Spanish @&u_car objeto Cautomobile (copia) \~English @&u_car Cautomobile object copy 

Cautomobile::Cautomobile(const Cautomobile &u_car)
{
    this->brand = u_car.get_brand();
    this->price = u_car.get_price();
    this->model = u_car.get_model();
    this->year = u_car.get_year();
}
/// \~Spanish Constructor parametrico \~English Parametric constructor
/// \~Spanish @comment Inicializa el valor de marca, precio, modelo, año, placa por medio de valores dados por el usuario. \~English @comment Set values brand, price, model, year, lin_plate
/// \~Spanish @param u_brand Cadena de caracteres \~English @param u_brand string
/// \~Spanish @param u_price Número de 1.00 en adelante \~English @param u_price unsigned int
/// \~Spanish @param u_model Cadena de caracteres \~English @param u_model string
/// \~Spanish @param u_year Año que va desde 1850 hasta 2018 \~English @param u_year unsigned int
/// \~Spanish @param u_lin_plate Cadena de caracteres de longitud 7 \~English @param u_lin_plate string

Cautomobile::Cautomobile(std::string u_brand,double u_price,std::string u_model,unsigned int u_year, std::string u_lin_plate)
{
    this->set_brand(u_brand);
    this->set_price(u_price);
    this->set_model(u_model);
    this->set_year(u_year);
    this->set_lin_plate(u_lin_plate);
}


/// \~Spanish @name  Observadores 
/// \~English @name Getters

/// \~Spanish @brief Ver marca  \~English @brief Get brand
/// \~Spanish @return Maraca actual  \~English @return Current brand

std::string Cautomobile::get_brand() const
{
    return this->brand;
}

/// \~Spanish @brief Ver precio \~English @brief Get price 
/// \~Spanish @return Precio actual \~English @return Current price

double Cautomobile::get_price() const
{
    return this->price;
}

/// \~Spanish @brief Ver modelo \~English @brief Get model
/// \~Spanish @return Modelo actual \~English @return Current model

std::string Cautomobile::get_model() const
{
    return this->model;
}

/// \~Spanish @brief Ver año \~English @brief Get year
/// \~Spanish @return Año actual \~English @return Current year

unsigned int Cautomobile::get_year() const
{
    return this->year;
}

/// \~Spanish @brief Ver placa \~English @brief Get lin plate
/// \~Spanish  @return Placa actual \~English @return Current lin plate

std::string Cautomobile::get_lin_plate() const
{
    return this->lin_plate;
}


/// \~Spanish @name Actuadores 
///\~English @name Setters

/// \~Spanish  @brief Cambiar modelo \~English @brief Changing brand value
/// \~Spanish @param Cadena \~English @param String

int Cautomobile::set_brand(const std::string u_brand)
{
    this->brand = u_brand;
    return 0;
}

/// \~Spanish @brief Cambiar precio \~English @brief Changing price value
/// \~Spanish @param Numero de doble precision \~English @param Double precision number

int Cautomobile::set_price(const double u_price)
{
    if(u_price >= 1.00)
    {
      this->price = u_price;
      return 0;
    }

    return 1;
    //throw std::domain_error("Price is negative or zero");
}

/// \~Spanish @brief Modifica el valor de modelo \~English @brief Changing model value
/// \~Spanish @param Cadena de caracteres \~English @param string

int Cautomobile::set_model(const std::string u_model)
{
    this->model = u_model;
    return 0;
} 

/// \~Spanish @brief Modifica el valor de año y mayor a 1850 \~English @brief Changing year value
/// \~Spanish @param Número de entero sin signo \~English @param unsigned int

int Cautomobile::set_year(const unsigned int u_year){
    if((u_year >= 1850) && (u_year <= 2018))
    {
      this->year = u_year;
      return 0;
    }

    return 1;

    //throw std::domain_error("Invalided year");
}

/// \~Spanish @brief  Modifica el valor de placa \~English @brief Changing lin plate value
/// \~Spanish @param Cadena de caracteres \~English @param string

int Cautomobile::set_lin_plate(const std::string u_lin_plate)
{
    if(u_lin_plate.size() == 7 )
    {
        this->lin_plate = u_lin_plate;
        return 0;
    }

    return 1;

    //throw std::invalid_argument("Incorrect lin plate");
}

/// \~Spanish @name Sobrecarga de operadores  
///\~English @name Operator's overload

/// \~Spanish @brief Sobrecarga del operador = \~English @brief Operator overload =
/// \~Spanish @param Objeto Cautomobile \~English @param Cautomobile object
/// \~Spanish @return Referencia a un objeto Cautomobile \~English @return Cautomobile reference

Cautomobile& Cautomobile::operator=(const Cautomobile u_Cautomobile)
{
    this->brand = u_Cautomobile.get_brand();
    this->price = u_Cautomobile.get_price();
    this->model = u_Cautomobile.get_model();
    this->year = u_Cautomobile.get_year();

    return (*this);
}

/// \~Spanish @brief Sobrecarga del operador == \~English @brief Operator overload ==
/// \~Spanish @param Objeto Cautomobile \~English @param Cautomobile object
/// \~Spanish @return TRUE or FALSE \~English @return TRUE or FALSE

bool Cautomobile::operator==(const Cautomobile u_Cautomobile)
{
    Cautomobile aux = *this;
    return((aux.get_brand() == u_Cautomobile.get_brand()) 
           and (aux.get_price() == u_Cautomobile.get_price()) 
           and (aux.get_model() == u_Cautomobile.get_model()) 
           and (aux.get_year() == u_Cautomobile.get_year()));
}


