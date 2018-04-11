#ifndef Cbank_account_H
#define Cbank_account_H

#include<iostream>
#include<cstdlib>
#include<string>

class Cbank_account { 
							
	private:
		double balance;
		long int account_number;
		std::string name;
		std::string last_name;
		int id;
		
	public:
		Cbank_account();
		Cbank_account(const std::string& nam, const std::string& last_n, const int id, const double balnc,const long int account);
		Cbank_account(const Cbank_account& account);
		~Cbank_account();

		double get_balance() const { return this->balance; }
		long int get_account_number() const { return this->account_number; }
		inline std::string get_name() const { return this->name; }
		inline std::string get_last_name() const { return this->last_name; }
		int get_id() const { return this->id; }

		
		void set_balance (const double blnc);
		void set_account_number (const long int accnt);
		void set_name (const std::string& nm);
		void set_last_name (const std::string& lstnm);
		void set_id (const int ci);

};

#endif
