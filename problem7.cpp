#include <bits/stdc++.h>
using namespace std;
int main()
{
    int people, time;
    double salary;
    cin>>people>>time>>salary;
    cout<<"NUMBER = "<< people<<endl;
    cout<<"SALARY = U$ "<< fixed << setprecision(2) << time * salary<<endl;
    return 0;
}