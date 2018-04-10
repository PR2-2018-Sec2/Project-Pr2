/**
 * @file automovil.h
 * @date 08/04/2018
 * @authors Rafael Rivas, Samuel Aranda, Oriana Pedroza, Jeremy Roa, Laura Rosales
 * @email ingrafaelrivascalderon@gmail.com
 * @brief Implementación de objeto Automovil
 * @note Los colores se enumeran del 0-9
 *          - 0 = Negro
 *          - 1 = Rojo    
 *          - 2 = Verde
 *          - 3 = Azul
 *          - 4 = Rosado
 *          - 5 = Amarillo
 *          - 6 = Marron 
 *          - 7 = Morado
 *          - 8 = Naranja
 *          - 9 = Blanco 
 *         
 *   - La lin_plate es una cadena de caracteres de tamaño 7 u 8 
 *   - price un numero de doble precisión
 *   - model una cadena de caracteres
 *   - year un entero sin signo
 *   - mileage un numero de doble precisión
 * 
 * 
 * 
 *   -Si se introduce un dato errado a la hora de crear los constructores el programa se detendra, utlizando la función assert de la libreria con dicho nombre, al igual que en los modificadores.
*/

#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H
#include <iostream>


class CAutomovil{

    private:
      std::string brand;
      double price;
      std::string model;
      unsigned int year;
      unsigned int color;
      std::string lin_plate;
      double mileage;
    
    public:

    /**
     * Constructors
    */

    /**
     *@brief Constructor por defecto
     */
    CAutomovil();
    /**
     *@brief Constructor por copia
     */
    CAutomovil(const CAutomovil&);
    /**
     *@brief Constructor parametrizado
     */
    CAutomovil(std::string,std::string,std::string,double,double,unsigned int, unsigned int);
     /**
     *@brief Destructor
     */
    ~CAutomovil();

    /**
     * Getters 
    */

    /**
     *@brief set_brand
     *@return brand actual
     */
    std::string get_brand() const;
    /**
     *@brief get_model
     *@return model actual
     */
    std::string get_model() const;
    /**
     *@brief get_lin_plate
     *@return lin_plate actual
     */
    std::string get_lin_plate() const;
    /**
     *@brief get_price
     *@return price actual
     */
    double get_price() const;
    /**
     *@brief get_mileage
     *@return mileage actual
     */    
    double get_mileage() const;
    /**
     *@brief get_year
     *@return año actual
     */
    unsigned int get_year() const;
    /**
     *@brief get_color
     *@return color actual
     */
    std::string get_color() const;
    unsigned int get_color_num() const;

    /**
     * Setters
    */

    /**
     *@brief set_lin_plate Modifica el valor de lin_plate
     *@param Cadena de caracteres
     */
    void set_lin_plate(const std::string);
     /**
     *@brief Modifica el valor de price
     *@param Número de doble precisión
     */
    void set_price(const double);
     /**
     *@brief Modifica el valor de color
     *@param Número entero sin signo
     */
    void set_color(const unsigned int);

     /**
     *@brief sobrecarga del operador = 
     *@param objeto automovil
     *@return objeto automovil
     */
    CAutomovil& operator=(const CAutomovil);
    /**
     *@brief sobrecarga del operador == 
     *@param objeto automovil
     *@return TRU or False
     */
    bool operator==(const CAutomovil);
    
};

#endif
