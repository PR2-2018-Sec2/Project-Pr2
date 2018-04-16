/**
 *  @name: Group Housing

 *  @members: Adolfo, Alejandro, Jorge, Cherry, Maria Fernanda
	
 *  @brief: Creation of class type housing

 *  @file: housing.h
 * 
 * */

#ifndef HOUSING_H
#define HOUSING_H

#include <iostream>
#include <stdlib.h>

/**  These variables need to be defined in the main program for proper functioning
    int *NROS = NULL;
    int n=0;
*/

class Housing{

    private:

        unsigned int num_Housing;   //Id of the housing unit
        std::string type_Housing;   //Type of housing (apartment, house, other)
        float size;                 //Area of the housing unit in square meters
        unsigned int num_bedrooms;  //Number of regular rooms
        unsigned int num_bathrooms; //Number of bathrooms
        unsigned int max_num_people;//Maximun number of people who can occupy the unit
        unsigned int num_parking;   //Number of parking spaces
        std::string state;          //State or province in which the unit is located
        std::string city;           //City in which the unit is located
        std::string address;        //Address of the unit
        float valuation;            //Value of the unit in currency

    public:

        //Class constructors

        Housing();                  //Default
        Housing(const Housing&);    //By reference
        Housing(const std::string,const float, const unsigned int, const unsigned int, const unsigned int, const unsigned int, const std::string, const float, const std::string, const std::string); //By parameters ,const int,int,int*
        
        //Class destructor
        
        ~Housing(){};
        
        //Observers
        
        unsigned int get_num_Housing() const;
        std::string get_type_Housing() const;
        float get_size() const;
        unsigned int get_num_bedrooms() const;
        unsigned int get_num_bathrooms() const;
        unsigned int get_max_num_people() const;
        unsigned int get_num_parking() const;
        std::string get_state() const;
        float get_valuation() const;
        std::string get_address() const;
        std::string get_city() const;

        //Modifiers
        
        void set_num_Housing(const int);//(number , n, *NROS)
        void set_type_Housing(const std::string);
        void set_size(const float);
        void set_num_bedrooms(const unsigned int);
        void set_num_bathrooms(const unsigned int);
        void set_max_num_people(const unsigned int);
        void set_num_parking(const unsigned int);
        void set_state(const std::string);
        void set_valuation(const unsigned int);
        void set_address(const std::string);
        void set_city(const std::string);  
};

#endif