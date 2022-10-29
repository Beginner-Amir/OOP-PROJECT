#ifndef DOKTOR
#define DOKTOR

#include "Password.h"
#include "Person.h"




class Doctor : public Person
{
	Credentials doctor_info;
	int id;
	char speciality[20];

public:

	void display();

	void change_doctor_credentials();

	void input();


	Doctor(const char* = " ", const char* = " ", const char* = " ", int = 0 ,const char* = " ", int = 0);

	friend ostream& operator<<(ostream&, Doctor*);

};




#endif