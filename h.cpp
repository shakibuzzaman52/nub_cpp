#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;

        int last = n % 10;

        while (n >= 10)
        {
            n = n / 10;
        }

        int first = n;
        cout << first + last << endl;
    }
    return 0;
}