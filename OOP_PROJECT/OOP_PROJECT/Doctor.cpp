
using namespace std;
#include <iostream>
#include "Doctor.h"



void Doctor::display()
{
	cout << "Doctor Info " << endl;
}

void Doctor::change_doctor_credentials()
{
	doctor_info.change_credentials();
}

void Doctor::input()
{
	
	cout << "Enter Doctor ID: " << endl;
	cin >> id;
	cout << "Doctor Speciality: " << endl;
	cin >> speciality;
}
//
//Doctor::Doctor(const char* i_name, const char* i_address, const char* i_phone, int i_age,const char* i_speciality , int i_id) : Person(i_name, i_address, i_phone, i_age)
//{
//	strcpy_s(speciality, i_speciality);
//	id = i_id;
//}
Doctor::Doctor(const char* i_name, const char* i_address, const char* i_phone, int i_age,const char* i_speciality , int i_id) : Person(i_name, i_address, i_phone, i_age)
{
	strcpy_s(speciality, i_speciality);
	Doctor::id = i_id;
}
ostream& operator << (ostream & out, Doctor * obj)
{
	obj->display_information();
	cout << "Doctor ID :  " << obj->id << endl;
	cout << "Doctor speciality " << obj->speciality << endl;
	return out;
}















