#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double basic_salary, gross_salary;
        cin>>basic_salary;
        if(basic_salary < 1500)
        {
            gross_salary = basic_salary + 0.1*basic_salary + 0.9*basic_salary;
        }
        else if(basic_salary >= 1500)
        {
            gross_salary = basic_salary + 500 + 0.98*basic_salary;
        }
        cout<< fixed << setprecision(2) << gross_salary<<endl;
    }
    return 0;
}