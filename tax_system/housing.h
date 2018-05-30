
/**
 * @file housing.h
 
 * \~English @name CHousing object
 * \~Spanish @name Objeto CHousing
 * \~English @class CHousing
 * \~Spanish @class CHousing
 * \~Spanish @brief Implementación de objeto Vivienda
 * \~English @brief Housing object implementation
 * @author Mafer Guerrero
 * @email mariafernandaguerrero.25@gmail.com
 * @author Adolfo Ramirez
 * @author Cherry Gota
 * @author Jose Rivera
 * @author Jorge Carrero
 * \~English @details This class housing have all atributes related to a house
 * \~Spanish @details La siguiente clase posee los atributos basicos de una casa
 * @author Mafer Guerrero
 * @email mariafernandaguerrero.25@gmail.com
 * @author Adolfo Ramirez
 * @author Cherry Gota
 * @author Jose Rivera
 * @author Jorge Carrero
 *
 * \~Spanish @nota
 * Los atributos que posee son: 
 *
 *   - Tipo de vivienda (apartamento, casa, otro)
 *   - Area de la vivienda en metros cuadrados
 *   - Estado donde esta localizado
 *   - Ciudad
 *   - Direccion
 *   - Valoracion
 * 
 * \~English @note     
 * The atributes are
 *    
 *   - Type of Chousing (apartment, house, other)
 *   - Area of the Chousing unit in square meters
 *   - State or province in which the unit is located
 *   - City in which the unit is located
 *   - Address of the unit
 *   - Value of the unit in currency
*/

#ifndef CHOUSING_H
#define CHOUSING_H

#include<iostream>

class CHousing{

    private:

        std::string type_housing;/**<\~English Type of Chousing (apartment, house, other) \~Spanish Tipo de vivienda (apartamento, casa, otro)*/
        float size;              /**<\~English Area of the Chousing unit in square meters \~Spanish Area de la vivienda en metros cuadrados*/
        std::string state;       /**<\~English State or province in which the unit is located \~Spanish Estado donde esta localizado*/
        std::string city;        /**<\~English City in which the unit is located \~Spanish Ciudad*/
        std::string address;     /**<\~English Address of the unit \~Spanish Direccion*/
        float valuation;         /**<\~English Valuation \~Spanish Valoracion*/

    public:

        
        /// \~English Constructor \~Spanish Constructor
        
        CHousing();
        /// \~English @brief Copied Constructor \~Spanish @brief  Constructor por copia
        CHousing(const CHousing&);
        /// \~English Parametric Constructor \~Spanish Constructor parametrico
        CHousing(const std::string,const float,  const std::string, const float, const std::string, const std::string);
        
        /// \~English Destructor \~Spanish Destructor
        ~CHousing(){};

        //\~English Getters \~Spanish Observadores

        std::string get_type_housing() const;  
        float get_size() const;  
        std::string get_state() const;  
        float get_valuation() const;  
        std::string get_address() const;  
        std::string get_city() const; 

        //\~English Setters \~Spanish Actuadores
        int set_type_housing(const std::string);
        int set_size(const float);
        int set_state(const std::string);
        int set_valuation(const float);
        int set_address(const std::string);
        int set_city(const std::string);

        CHousing operator=(const CHousing&);
		bool operator==(const CHousing&);
};

#endif
