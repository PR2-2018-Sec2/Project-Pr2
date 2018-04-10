/**
 * 	@file main.cpp
 *  @author's Raul Rojas, Diego Benitez, Luis Hernandez, Gabriel Guerrero, Alberto Calderon.
 *  @Date 5/3/2018
 *  @brief Archivo de pruebas para el TDA Cuser
*/
#include <user.h>
#include <iomanip>
	int main()
{
	std::string n, ln;
	long unsigned int i;
	unsigned int a, s;
	///Constructor por defecto
	Cuser user;

	std::cout << "\t\tDefault Values" << "\n";
	std::cout << "Id: " << user.get_Id() << "\n";
	std::cout << "Name: " << user.get_Name() << "\n";
	std::cout << "Lastname: " << user.get_Lname() << "\n";
	std::cout << "Age: " << user.get_Age() << "\n";
	std::cout << "Sex: " << user.get_Sex() << "\n";
	

	///Prueba de modificadores
	std::cout << "\t\tInsert new Values to test the Setters" << "\n";
	std::cout << "Insert new id:" << "\n";
	std::cin >> i;
	user.set_Id(i);
	std::cout << "Insert new name:" << "\n";
	std::cin.ignore();
	std::getline(std::cin, n);
	user.set_Name(n);
	std::cout << "Insert new lastname:" << "\n";
	std::getline(std::cin,ln);
	user.set_Lname(ln);
	std::cout << "Insert new age:" << "\n";
	std::cin >> a;
	user.set_Age(a);
	std::cout << "Insert new sex (male=1/female=0):" << "\n";
	std::cin >> s;
	user.set_Sex(s);
	

	std::cout << "\t\tNew Values" << "\n";
	std::cout << "Id: " << user.get_Id() << "\n";
	std::cout << "Name: " << user.get_Name() << "\n";
	std::cout << "Lastname: " << user.get_Lname() << "\n";
	std::cout << "Age: " << user.get_Age() << "\n";
	std::cout << "Sex: " << user.get_Sex() << "\n";
	

	///Constructor por parametros
	std::cout << "\t\tInsert Values for the Parameterized Builder" << "\n";
	std::cout << "Insert new id:" << "\n";
	std::cin >> i;
	std::cout << "Insert new name:" << "\n";
	std::cin >> n;
	std::cout << "Insert new lastname:" << "\n";
	std::cin >> ln;
	std::cout << "Insert new age:" << "\n";
	std::cin >> a;
	std::cout << "Insert new sex (male=1/female=0):" << "\n";
	std::cin >> s;
	

	Cuser user2(i, n, ln, a, s);

	std::cout << "\t\tValues of the Parameterized Builder" << "\n";
	std::cout << "Id: " << user2.get_Id() << "\n";
	std::cout << "Name: " << user2.get_Name() << "\n";
	std::cout << "Lastname: " << user2.get_Lname() << "\n";
	std::cout << "Age: " << user2.get_Age() << "\n";
	std::cout << "Sex: " << user2.get_Sex() << "\n";


	///Constructor por copia
	i = 26555555;
	n = "Pedro";
	ln = "Marquez";
	a = 20;
	s = 1;
	Cuser user3(i, n, ln, a, s);///auxiliar
	
	Cuser user4(user3);

	std::cout << "\t\tValues of the Copy Builder" << "\n";
	std::cout << "Id: " << user3.get_Id() << "\n";
	std::cout << "Name: " << user3.get_Name() << "\n";
	std::cout << "Lastname: " << user3.get_Lname() << "\n";
	std::cout << "Age: " << user3.get_Age() << "\n";
	std::cout << "Sex: " << user3.get_Sex() << "\n";
	

	return 0;
}
