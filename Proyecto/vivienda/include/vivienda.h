/**
 *  @name: Grupo vivienda
 *  @brief: Creacion de clase tipo vivienda
 * 
 * */

#ifndef VIVIENDA_H
#define VIVIENDA_H

#include<iostream>
class Vivienda{

    private:
        unsigned int nro_vivienda;///codigo de vivienda/numero de casa/otro
        std::string tipo_vivienda;///apartamento, casa, otro
        float tamanio;///tamanio en metros cuadrados
        unsigned int nro_habitaciones;///cantidad de habitaciones
        unsigned int nro_banios;///cantidad de banios
        unsigned int nro_max_personas;///si tiene un numero maximo de personas que pueden vivir
        unsigned int nro_estacionamiento;///cantidad de puestos de estacionamiento
        std::string estado;///si esta ocupada o no
        float valoracion;///precio de la vivivenda

    public:

        ///constructores

        Vivienda();///por defecto
        Vivienda(const Vivienda&);///por referencia
        Vivienda(const unsigned int, const std::string,const float, const unsigned int, const unsigned int, const unsigned int, const unsigned int, const std::string, const float);///por parametros
        
        ///destructor
        
        ~Vivienda();
        
        ///observadores
        
        unsigned int get_numero_vivienda() const;
        std::string get_tipo_vivienda() const;
        float get_tamanio() const;
        unsigned int get_nro_habitacion() const;
        unsigned int get_nro_banios() const;
        unsigned int get_nro_max_personas() const;
        unsigned int get_nro_estacionamiento() const;
        std::string get_estado() const;
        float get_valoracion() const;
        
        ///modificadores
        
        void set_numero_vivienda(const unsigned int);
        void set_tipo_vivienda(const std::string);
        void set_tamanio(const float);
        void set_nro_habitacion(const unsigned int);
        void set_nro_banios(const unsigned int);
        void set_nro_max_personas(const unsigned int);
        void set_nro_estacionamiento(const unsigned int);
        void set_estado(const std::string);
        void set_valoracion(const unsigned int);  
};



#endif