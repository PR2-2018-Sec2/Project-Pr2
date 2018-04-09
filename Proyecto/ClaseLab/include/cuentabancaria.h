#ifndef CUENTABANCARIA_H
#define CUENTABANCARIA_H

#include<iostream>
#include<cstdlib>
#include<string>

class CuentaBancaria { 
							
	private:
		double Saldo;
		long int NumeroDeCuenta;
		std::string Nombre;
		std::string Apellido;
		int Cedula;
		
	public:
		CuentaBancaria();
		CuentaBancaria(const std::string& nom, const std::string& ape, const int ced, const double sald,const long int cuenta);
		CuentaBancaria(const CuentaBancaria& cuenta);
		~CuentaBancaria();

		double getSaldo() const { return this->Saldo; }
		long int getNumeroDeCuenta() const { return this->NumeroDeCuenta; }
		inline std::string getNombre() const { return this->Nombre; }
		inline std::string getApellido() const { return this->Apellido; }
		int getCedula() const { return this->Cedula; }

		
		void setSaldo (const double sald);
		void setNumeroDeCuenta (const long int cuenta);
		void setNombre (const std::string& nom);
		void setApellido (const std::string& ape);
		void setCedula (const int ced);

};

#endif
