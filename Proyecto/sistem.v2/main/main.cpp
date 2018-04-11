#include <tax_user.h>


int main (){
    Ctax_user a;
    std::cout << "id user: "<<a.get_id()<<"\n";
    std::cout << "name user: "<<a.get_name()<<"\n";
    std::cout << "Last name user: "<<a.get_lname()<<"\n";
    std::cout << "Age user: "<<a.get_age()<<"\n";
    std::cout << "Sex user: "<<a.get_sex()<<"\n";    
    std::cout << "brand car: " <<a.x_auto.get_brand() << "\n";
    std::cout << "model car: " << a.x_auto.get_model() << "\n";
    std::cout << "lin_plate car: " << a.x_auto.get_lin_plate() << "\n";
    std::cout << "Price car: " << a.x_auto.get_price() << "\n";
    std::cout << "Year car: " << a.x_auto.get_year() << "\n";
    std::cout << "Balance bank: " << a.x_account.get_balance()<<"\n";
    std::cout << "Account number bank: " << a.x_account.get_account_number()<<"\n";
    std::cout << "Type_Housing: "<<a.x_housing.get_type_Housing()<<"\n";
    std::cout << "Tax: "<<a.get_tax()<<"\n";

	return 0;
}
