#pragma once
#include <iostream>
#include <cstring>
using namespace std;

struct Employee
{
	char surname[100] = "";
	int BirthYear = 0;
	char position[100] = "";
	float salary = 0;
	char education[100] = "";


	void showInfo()
	{
		cout << "Surname: " << surname << endl;
		cout << "Birth year: " << BirthYear << endl;
		cout << "Position: " << position << endl;
		cout << "Salary: " << salary << "UAH" << endl;
		cout << "Education: " << education << endl;
	}
};