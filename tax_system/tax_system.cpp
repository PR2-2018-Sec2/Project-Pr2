#include <tax_system.h>

bool verify_database()
{
    mkdir("../database", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
    std::fstream arc("../database/tax_users.txt", std::ios::in);

    if (!arc.is_open())
        return true;
    else
        return false;
}

Ctax_system::Ctax_system()
{
    this->cl = Ctax_user();
    this->adm = Cadministrator();
}
Ctax_system::~Ctax_system() {}

bool Ctax_system::create_database()
{
    if (verify_database())
    {
        std::fstream arc("../database/tax_users.txt", std::ios::out | std::ios::in | std::ios::trunc);
        if (!arc.is_open())
            return false;

        arc.clear();

        for (int i = 0; i < 10000; ++i)
            arc << '1' << std::setfill(' ') << std::setw(117) << '\n';

        arc.close();
        arc.open("../database/administrators.txt", std::ios::out | std::ios::in | std::ios::trunc);
        arc.clear();

        if (!arc.is_open())
            return false;

        for (int i = 0; i < 1000; ++i)
            arc << '1' << std::setfill(' ') << std::setw(117) << '\n';

        arc.close();
        return true;

    } else return false; 
}
bool confirmation_user(int pos)
{
    std::fstream arch;
    arch.open("../database/tax_users.txt");
    if (!arch.is_open())
        return false;
    arch.seekp((pos - 1) * 118, std::ios::beg);
    if (arch.peek() == '0')
    {
        arch.close();
        return false;
    }
    else
    {
        arch.close();
        return true;
    }
}
bool Ctax_system::register_cl(Ctax_user a)
{
    std::hash<std::string> ar;
    std::string asr = a.get_id();
    int pos = ar(asr) % 10000;
    if (confirmation_user(pos))
    {
        std::fstream arch;
        arch.open("../database/tax_users.txt");
        if (!arch.is_open())
            return false;
        arch.clear();
        arch.seekp((pos - 1) * 118, std::ios::beg);
        arch << std::left << std::setw(4) << "0";
        arch << std::left << std::setw(16) << a.get_id();
        arch << std::left << std::setw(16) << a.get_password();
        arch << std::left << std::setw(16) << a.get_sex();
        arch << std::left << std::setw(16) << a.get_name();
        arch << std::left << std::setw(16) << a.get_lname();
        arch << std::left << std::setw(16) << a.get_age();
        arch << std::left << std::setw(16) << a.get_tax();
        arch.close();

        std::string def = "../database/" + a.get_id();
        mkdir(def.c_str(), S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
        std::string car = def + "/" + a.get_id() + "_a.txt";
        std::string acc = def + "/" + a.get_id() + "_b.txt";
        std::string bank = def + "/" + a.get_id() + "_h.txt";
        std::ofstream we;
        we.open(car);
        we.close();
        we.open(acc);
        we.close();
        we.open(bank);
        we.close();
        return true;
    }
    else
    {
        return false;
    }
}

bool Ctax_system::register_adm(Cadministrator a)
{
    std::hash<std::string> ar;
    std::string asr = a.get_id();
    int pos = ar(asr) % 1000;
    std::fstream arch;
    arch.open("../database/administrators.txt");
    if (!arch.is_open())
        return false;
    arch.seekp((pos - 1) * 118, std::ios::beg);
    if (arch.peek() == '1')
    {
        arch.clear();
        arch.seekp((pos - 1) * 118, std::ios::beg);
        arch << std::left << std::setw(4) << "0";
        arch << std::left << std::setw(16) << a.get_id();
        arch << std::left << std::setw(16) << a.get_password();
        arch << std::left << std::setw(16) << a.get_sex();
        arch << std::left << std::setw(16) << a.get_name();
        arch << std::left << std::setw(16) << a.get_lname();
        arch << std::left << std::setw(16) << a.get_age();
        arch.close();
        return true;
    }
    else
    {
        arch.close();
        return false;
    }
}



