// HomeTask1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"
using namespace std;
int main()
{
    int N = 5;

    Employee* arr = new Employee[N]
    {
        { "Vasilich", 1876, "CEO", 150'000, "Best" },
        { "Annavna", 1990, "CTO", 120'000, "TechSavvy" },
        { "Hiroshivna", 1985, "CFO", 130'000, "FinanceWhiz" },
        { "Sophievna", 1988, "COO", 125'000, "OperationsGuru" },
        { "Nikolaivna", 1993, "CMO", 110'000, "MarketingMaestro" }
    };




    int count = 0;
    for (int i = 0; i < N; ++i)
    {
        if (2024 - arr[i].BirthYear > 60)
        {
            count++;
            arr[i].showInfo();
            cout << endl;
        }
    }


    delete[] arr;

    cout << "Total employees over 60: " << count << endl;
}

