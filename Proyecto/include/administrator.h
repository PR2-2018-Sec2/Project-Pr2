#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include <iostream>
#include <tax_user.h>


class Cadministrator: public Cuser
{
    private:
    
      Ctax_user client;

    public:

      Cadministrator();

      ~Cadministrator();

      Ctax_user get_client() const;
      float get_client_tax() const;
      void set_id(std::string);
      void set_client(Ctax_user);
      bool delete_client(std::string);
      
};

#endif