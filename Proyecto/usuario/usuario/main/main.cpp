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
	system("clear");
	std::cout << "\t\tDefault Values" << std::endl;
	std::cout << "Id: " << user.get_id() << std::endl;
	std::cout << "Name: " << user.get_name() << std::endl;
	std::cout << "Lastname: " << user.get_lname() << std::endl;
	std::cout << "Age: " << user.get_age() << std::endl;
	std::cout << "Sex: " << user.get_sex() << std::endl;
	std::cout << "Press ENTER to continue" << std::endl;
	std::cin.get();
	system("clear");

	///Prueba de modificadores
	std::cout << "\t\tInsert new Values to test the Setters" << std::endl;
	std::cout << "Insert new id:" << std::endl;
	std::cin >> i;
	user.set_id(i);
	std::cout << "Insert new name:" << std::endl;
	std::cin.ignore();
	std::getline(std::cin, n);
	user.set_name(n);
	std::cout << "Insert new lastname:" << std::endl;
	std::cin >> ln;
	user.set_lname(ln);
	std::cout << "Insert new age:" << std::endl;
	std::cin >> a;
	user.set_age(a);
	std::cout << "Insert new sex (male=1/female=0):" << std::endl;
	std::cin >> s;
	user.set_sex(s);
	std::cout << "Press ENTER to continue" << std::endl;
	std::cin.get();
	system("clear");

	std::cout << "\t\tNew Values" << std::endl;
	std::cout << "Id: " << user.get_id() << std::endl;
	std::cout << "Name: " << user.get_name() << std::endl;
	std::cout << "Lastname: " << user.get_lname() << std::endl;
	std::cout << "Age: " << user.get_age() << std::endl;
	std::cout << "Sex: " << user.get_sex() << std::endl;
	std::cout << "Press ENTER to continue" << std::endl;
	std::cin.get();
	system("clear");

	///Constructor por parametros
	std::cout << "\t\tInsert Values for the Parameterized Builder" << std::endl;
	std::cout << "Insert new id:" << std::endl;
	std::cin >> i;
	std::cout << "Insert new name:" << std::endl;
	std::cin >> n;
	std::cout << "Insert new lastname:" << std::endl;
	std::cin >> ln;
	std::cout << "Insert new age:" << std::endl;
	std::cin >> a;
	std::cout << "Insert new sex (male=1/female=0):" << std::endl;
	std::cin >> s;
	std::cout << "Press ENTER to continue" << std::endl;
	std::cin.get();
	system("clear");

	Cuser user2(i, n, ln, a, s);

	std::cout << "\t\tValues of the Parameterized Builder" << std::endl;
	std::cout << "Id: " << user2.get_id() << std::endl;
	std::cout << "Name: " << user2.get_name() << std::endl;
	std::cout << "Lastname: " << user2.get_lname() << std::endl;
	std::cout << "Age: " << user2.get_age() << std::endl;
	std::cout << "Sex: " << user2.get_sex() << std::endl;
	std::cout << "Press ENTER to continue" << std::endl;
	std::cin.get();
	system("clear");

	///Constructor por copia
	i = 26555555;
	n = "Pedro";
	ln = "Marquez";
	a = 20;
	s = 1;
	Cuser user3(i, n, ln, a, s);///auxiliar
	
	Cuser user4(user3);

	std::cout << "\t\tValues of the Copy Builder" << std::endl;
	std::cout << "Id: " << user3.get_id() << std::endl;
	std::cout << "Name: " << user3.get_name() << std::endl;
	std::cout << "Lastname: " << user3.get_lname() << std::endl;
	std::cout << "Age: " << user3.get_age() << std::endl;
	std::cout << "Sex: " << user3.get_sex() << std::endl;
	std::cout << "Press ENTER to finish" << std::endl;
	std::cin.get();
	system("clear");

	return 0;
}
