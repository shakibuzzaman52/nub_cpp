#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, fact = 1;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        fact = (fact * i) % 10000;
    }
    cout << fact<< endl;
    return 0;
}