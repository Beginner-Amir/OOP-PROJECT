#include "Admin.h"



void Admin::display()
{
	cout << "Admin Info" << endl;
}

void Admin::change_admin_credentials()
{
	admin_info.change_credentials();
}

void Admin::input()
{
}

Admin::Admin(const char* i_name, const char* i_address, const char* i_phone,int i_age  ) : Person(i_name , i_address , i_phone , i_age)
{
	//cout << "Admin ^ " << this << endl;

}


