/**
 * @file Cautomobile.h
 * @date 10/04/2018
 * @authors Rafael Rivas, Samuel Aranda, Oriana Pedroza, Jeremy Roa, laura Rosales
 * @email ingrafaelrivascalderon@gmail.com
 * @brief Implementación de objeto Cautomobile
 * @note         
 *   - la lin_plate es una cadena de caracteres de tamaño 7 
 *   - price un numero de doble precisión
 *   - model una cadena de caracteres
 *   - year un entero sin signo
 * 
 * 
 * 
 *   -Si se introduce un dato errado a la hora de crear los constructores el programa se detendra, utlizando la función assert de la libreria con dicho nombre.
*/

#ifndef AUTOMOBIlE_H
#define AUTOMOBIlE_H
#include <iostream>
#include <stdexcept>

class Cautomobile{

    private:
      std::string brand;
      double price;
      std::string model;
      unsigned int year;
      std::string lin_plate;    
    public:

    /**
     * Constructores
    */

    /**
     *@brief Constructor por defecto
     */
    Cautomobile();
    /**
     *@brief Constructor por copia
     */
    Cautomobile(const Cautomobile&);
    /**
     *@brief Constructor parametrizado
     */
    Cautomobile(std::string,double,std::string,unsigned int, std::string);
     /**
     *@brief Destructor
     */
    ~Cautomobile(){};

    /**
     * Getters 
    */

    /**
     *@brief set_brand
     *@return brand actual
     */
    std::string get_brand() const;
    /**
     *@brief get_price
     *@return price actual
     */
    double get_price() const;    
    /**
     *@brief get_model
     *@return model actual
     */
    std::string get_model() const;
    /**
     *@brief get_year
     *@return año actual
     */
    unsigned int get_year() const;    
    /**
     *@brief get_lin_plate
     *@return lin_plate actual
     */
    std::string get_lin_plate() const;

    /**
     * Setters
    */

     /**
     *@brief Modifica el valor de brand
     *@param Cadena de caracteres
     */
    void set_brand(const std::string);

     /**
     *@brief Modifica el valor de price
     *@param Número de doble precisión
     */
    void set_price(const double);

     /**
     *@brief Modifica el valor de model
     *@param Cadena de caracteres
     */
    void set_model(const std::string);        

     /**
     *@brief Modifica el valor de year y mayor a 1850
     *@param Número de entero sin signo
     */
    void set_year(const unsigned int);
    /**
     *@brief set_lin_plate Modifica el valor de lin_plate
     *@param Cadena de caracteres
     */
    void set_lin_plate(const std::string);



  
     /**
     *@brief Sobrecarga del operador = 
     *@param Objeto Cautomobile
     *@return Referencia a un objeto Cautomobile
     */
    Cautomobile& operator=(const Cautomobile);
    /**
     *@brief Sobrecarga del operador == 
     *@param Objeto Cautomobile
     *@return TRUE or FALSE
     */
    bool operator==(const Cautomobile);
    
};

#endif
