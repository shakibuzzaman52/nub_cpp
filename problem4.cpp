#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int income, tax, invest;
        cin >> income >> tax;
        invest = income - tax;
        cout <<invest<<endl;
    }
    return 0;
}