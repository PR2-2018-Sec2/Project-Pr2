/**
 * @author Rafael Rivas
 * @email ingrafaelrivascalderon@gmail.com
 * @brief Implementación de objeto Automovil
 * @comment *Los colores se enumeran del 0-9
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
 *         # La placa es una cadena de caracteres de tamaño 7 u 8 
 *         # Precio un numero de doble presición
 *         # Modelo una cadena de caracteres
 *         # Anio un entero sin signo
 *         # Kilometraje un numero de doble presición
*/

#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H
#include <iostream>


class Automovil{

    private:
      std::string Marca;
      double Precio;
      std::string Modelo;
      unsigned int Anio;
      unsigned int Color;
      std::string Placa;
      double Kilometraje;
    
    public:

    /**
     * Constructors
    */

    Automovil();
    Automovil(const Automovil&);
    Automovil(std::string,std::string,std::string,double,double,unsigned int, unsigned int);
    ~Automovil();

    /**
     * Getters 
    */
    
    std::string get_Marca() const;
    std::string get_Modelo() const;
    std::string get_Placa() const;
    double get_Precio() const;
    double get_Kilometraje() const;
    unsigned int get_Anio() const;
    unsigned int get_Color() const;

    /**
     * Setters
    */

    void set_Placa(const std::string);
    void set_Precio(const double);
    void set_Color(const unsigned int);

    Automovil& operator=(const Automovil);
    bool operator==(const Automovil);
    
};



#endif
