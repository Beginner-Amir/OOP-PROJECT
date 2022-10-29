#ifndef PERSONNN
#define PERSONNN

const int SIZE = 50;

#include <cstring>
#include <iostream>
using namespace std;





class Person
{


	char name[SIZE];
	char address[SIZE];
	char phone[11];
	int age;



public:




	// GETTERS
	const char* get_name() { return name; }
	int get_age() { return age; }
	const char* get_address() { return address; }
	const char* get_phone() { return phone; }




	// Setters
	void set_name(const char* i_name) { strcpy_s(name, i_name); }
	void set_age(int i_age) { age = i_age; }
	void set_adress(const char* i_address) { strcpy_s(address, i_address); }
	void set_phone(const char* i_phone){ strcpy_s(phone, i_phone); }





	// CONSTRUCTORS 


	Person(const char* i_name = " ", const char* i_address = " ", const char* i_phone = " ", int i_age = 0);


	virtual void display() = 0;

	void input() {}


	friend ostream& operator << (ostream&, Person*);

	friend istream& operator >> (istream&, Person*);

	
	void display_information();



};


#endif 


