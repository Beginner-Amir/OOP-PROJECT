#define _CRT_SECCURE_NO_WARNINGS
#include  "Admin.h"
#include  "Doctor.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	Person* ptr[2];

	ptr[0] = new Doctor;
	ptr[1] = new Admin;

	cout << "Enter Doctor Information : " << endl;
	cin >> ptr[0];
	cout << "Enter Admin Information : " << endl;
	cin >> ptr[1];
	cout << ptr[0] << endl;
	cout << ptr[1] << endl;
	Admin *obj;
	obj = new Admin;
	cout << obj;
	Doctor* obj1;
	obj1 = new Doctor;
	cout << obj1;
}