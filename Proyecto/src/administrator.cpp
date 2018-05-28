#include <administrator.h>
#include <fstream>
#include <functional>
#include <cstdlib>

      Cadministrator::Cadministrator()
      {
            this->id = "V12345678";
            this->name = "NAME";
            this->lname = "LASTNAME";
            this->age = 18;
            this->sex = '0';
            this->password = "NULL";
            this->client = Ctax_user();
      }

      Cadministrator::~Cadministrator(){}

      Ctax_user Cadministrator::get_client() const
      {
            return this->client;
      }
      float Cadministrator::get_client_tax() const
      {
            return this->client.get_tax();
      }

      void Cadministrator::set_id(std::string adm)
      {
            if ((adm.size() == 9) and (search_numbers(adm.substr(1,9)) and (adm[0] == 'V')))
                this->name = adm;
            else throw std::invalid_argument("Invalided ID");
      }

      void Cadministrator::set_client(Ctax_user cop)
      {
            this->client = cop;
      }

      bool Cadministrator::delete_client(std::string ced)
      {
            std::fstream arch;
            std::hash<std::string> ar;
      	arch.open("../database/tax_users.txt");
            if(!arch.good())
                  exit(2);
	      arch.clear();
            int pos = ar(ced) % 10000;
      	arch.seekp((pos-1)*118,std::ios::beg);
            	
	      char test = arch.peek();
	      if(test == '0')
	      {
	            arch<<"1                                                                                                                ";
               	arch.close();
                  return true;
	      }
           	arch.close();
            return false;
      }