
/**
 * @file automobile.h

 * \~English @name CAutomobile object
 * \~Spanish @name Objeto CAutomovil
 * \~English @class Cautomobile
 * \~Spanish @class Cautomobile
 * \~Spanish @brief Implementación de objeto Automovil
 * \~English @brief Automobile object implementation
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
 * \~English @details This class automobile have all atributes related to a automobile
 * \~Spanish @details La siguiente clase posee los atributos basicos de un automovil
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
 * \~Spanish @nota
 * Los atributos que posee son: 
 *
 *   - Placa
 *   - Marca
 *   - Precio
 *   - Modelo
 *   - Año
 * 
 * \~English @note     
 * The atributes are
 *    
 *   - Lin plate
 *   - Brand
 *   - Price
 *   - Model
 *   - Year
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
    
        /// \~Spanish Constructores \~English Cosntructor

        Cautomobile();
        /// \~English Copied Constructor \~Spanish Constructor por copia
        Cautomobile(const Cautomobile&);
        /// \~English Parametric Constructor \~Spanish Constructor parametrico
        Cautomobile(std::string,double,std::string,unsigned int, std::string);

        /// \~Spanish @brief Destructor \~English @brief Destructor
        ~Cautomobile(){};

        // \~English Getters \~Spanish Observadores

        std::string get_brand() const;
        double get_price() const;  
        std::string get_model() const;
        unsigned int get_year() const;    
        std::string get_lin_plate() const;

        // \~English Setters \~Spanish Actuadores

        void set_brand(const std::string);
        void set_price(const double);
        void set_model(const std::string);      
        void set_year(const unsigned int);    
        void set_lin_plate(const std::string);

        
        Cautomobile& operator=(const Cautomobile);
        bool operator==(const Cautomobile);
    
};

#endif
