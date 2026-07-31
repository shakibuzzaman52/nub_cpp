#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int hour, min, ses;

    hour = n / 3600;
    min = (n % 3600) / 60;
    ses = n % 60;

    cout << hour << ":" << min << ":" << ses<<endl;

    return 0;
}