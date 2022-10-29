#define _CRT_SECCURE_NO_WARNINGS
#include  "Admin.h"
#include  "Doctor.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	Person* p = new Doctor;

	Doctor f;

	Admin* a_ptr = dynamic_cast<Admin*>(&f);
	
	
}