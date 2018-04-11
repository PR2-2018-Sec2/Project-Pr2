/**
 *  @name: Group CHousing

 *  @members: Adolfo, Alejandro, Jorge, Cherry, Maria Fernanda
	
 *  @brief: Creation of class type Chousing

 *  @file: Chousing.h
 * 
 * */

#ifndef CHOUSING_H
#define CHOUSING_H

#include<iostream>

class CHousing{

    private:

        std::string type_housing;   ///Type of Chousing (apartment, house, other)
        float size;                 ///Area of the Chousing unit in square meters
        std::string state;          ///State or province in which the unit is located
        std::string city;           ///City in which the unit is located
        std::string address;        ///Address of the unit
        float valuation;            ///Value of the unit in currency

    public:

        ///Class constructors

        CHousing();                  ///Default
        CHousing(const CHousing&);    ///By reference
        CHousing(const std::string,const float,  const std::string, const float, const std::string, const std::string); ///By parameters ,const int,int,int*
        
        ///Class destructor
        
        ~CHousing(){};
        
        ///Observers
        
      
        std::string get_type_housing() const;
        float get_size() const;
        std::string get_state() const;
        float get_valuation() const;
        std::string get_address() const;
        std::string get_city() const;

        ///Modifiers
        
        
        void set_type_housing(const std::string);
        void set_size(const float);
        void set_state(const std::string);
        void set_valuation(const unsigned int);
        void set_address(const std::string);
        void set_city(const std::string);  
};

#endif