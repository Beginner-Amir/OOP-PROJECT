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

	cin >> ptr[0] >> ptr[1];


	cout << ptr[0] << endl;
	cout << ptr[1] << endl;
	

}