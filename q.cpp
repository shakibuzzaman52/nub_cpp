#include <bits/stdc++.h>
using namespace std;
int main()
{
    int withdraw;
    double balance;
    cin>>withdraw>>balance;
    if (withdraw % 5 == 0 && withdraw < balance)
    {
        cout << fixed << setprecision(2) << balance - withdraw - 0.5 << endl;
    }
    else
    cout << fixed << setprecision(2) << balance << endl;
    return 0;
}