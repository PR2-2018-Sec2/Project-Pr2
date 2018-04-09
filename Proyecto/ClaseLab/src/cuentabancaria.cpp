#include<cuentabancaria.h>

CuentaBancaria::CuentaBancaria() { 
	   
	this->Nombre = "Cristiano";
	this->Apellido = "Messi";
	this->Cedula = 0;		
	this->Saldo = 0;
	this->NumeroDeCuenta = 0;
}

CuentaBancaria::CuentaBancaria(const std::string& nom, const std::string& ape, const int ced, const double sal, const long int cuenta ) { 
	this->Nombre = nom;
	this->Apellido = ape;
	this->Cedula = ced;
	this->Saldo = sal;
	this->NumeroDeCuenta = cuenta;

}

CuentaBancaria::CuentaBancaria(const CuentaBancaria& cuen){ 
	
	this->Nombre = cuen.Nombre;
	this->Apellido = cuen.Apellido;
	this->Cedula = cuen.Cedula;
	this->Saldo = cuen.Saldo;
	this->NumeroDeCuenta= cuen.NumeroDeCuenta; 
}

CuentaBancaria::~CuentaBancaria(){  
}
