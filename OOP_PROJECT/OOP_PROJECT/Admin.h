#ifndef ADMINN
#define ADMINN


#include "Person.h"
#include "Password.h"




class Admin : public Person
{
	Credentials admin_info;

public:

	void display();

	void change_admin_credentials();

	void input();


	Admin(const char* = " ", const char* = " ", const char* = " ", int = 0);

	//~Admin() { cout << "~Admin" << endl; }
};


#endif