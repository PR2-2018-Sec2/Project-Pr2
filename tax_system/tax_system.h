#ifndef TAX_SYSTE_H
#define TAX_SYSTE_H

#include <tax_user.h>
#include <administrator.h>
#include <vector>
#include <iomanip>
#include <fstream>
#include <functional>
#include <cstdlib>
#include <sys/stat.h>
#include <tax_system.h>

struct getadm
{
    std::vector<Ctax_user> clients;
    double recauder;
};

class Ctax_system
{
    public:
    Ctax_user cl;
    Cadministrator adm;

    Ctax_system();
    ~Ctax_system();    

    bool create_database();

    bool register_cl(Ctax_user);
    bool register_adm(Cadministrator);

    getadm get_cl();

};

#endif

bool verify_database();