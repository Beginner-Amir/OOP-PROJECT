#include "Person.h"
#include<string>


void Person::display_information()
{
	cout << endl;
	cout << "Name: " << name << endl;
	cout << "Address: " << address << endl;
	cout << "Phone: " << phone << endl;
	cout << "Age: " << age << endl;
}


Person::Person(const char* i_name, const char* i_address, const char* i_phone, int i_age)
{


	//cout << "Person ^ " << this << endl;
	age = i_age;
	strcpy_s(name, i_name);
	strcpy_s(address, i_address);
	strcpy_s(phone, i_phone);


}



ostream& operator<<(ostream& out, Person* obj)
{
	
	cout << "Name: " << obj->name << endl;
	cout << "Address: " << obj->address << endl;
	cout << "Phone: " << obj->phone << endl;
	cout << "Age: " << obj->age << endl;
	return out;
}

istream& operator>>(istream& in, Person* obj)
{
	cout << "Enter Name: " << endl;
	in.getline(obj->name,SIZE);
	cout << "Enter Address: " << endl;
	in.getline(obj->address, SIZE);
	cout << "Enter Phone#: " << endl;
	in >> obj->phone;

	do
	{
		cout << "Enter Age: " << endl;
		in >> obj->age;
	} while (obj->age < 1);

	cin.ignore();
	return in;
}
