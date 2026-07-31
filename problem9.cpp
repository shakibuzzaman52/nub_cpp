#include <bits/stdc++.h>
using namespace std;

int main()
{
    double salary;
    cin >> salary;

    int rate;

    if (salary <= 400.00)
    {
        rate = 15;
    }
    else if (salary <= 800.00)
    {
        rate = 12;
    }
    else if (salary <= 1200.00)
    {
        rate = 10;
    }
    else if (salary <= 2000.00)
    {
        rate = 7;
    }
    else
    {
        rate = 4;
    }

    double gain = salary * rate / 100;
    double newSalary = salary + gain;


    cout << "Novo salario: "<< fixed << setprecision(2) << newSalary << endl;
    cout << "Reajuste ganho: "<< fixed << setprecision(2) << gain << endl;
    cout << "Em percentual: " << rate << " %" << endl;

    return 0;
}