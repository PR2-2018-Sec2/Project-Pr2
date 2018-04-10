#include <suser.h>


	int main ()

{
	Cuser o;
	o.set_name("Jose");
	CAutomovil j;
	Cbank_account b;
	Housing c;

	c.set_size(200.1);
	j.set_price(2457);

	Csuser A(o, j, b, c);

std::cout<<"h";


return 0;
}
