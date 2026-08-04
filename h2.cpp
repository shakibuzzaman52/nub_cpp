#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x;
    cin >> a >> b >> c >> x;

    if (x <= a)
    {
        cout << fixed << setprecision(12) << 1.0 << endl;
    }
    else if (x > b)
    {
        cout << fixed << setprecision(12) << 0.0 << endl;
    }
    else
    {
        cout << fixed << setprecision(12) << (double)c / (b - a) << endl;
    }

    return 0;
}