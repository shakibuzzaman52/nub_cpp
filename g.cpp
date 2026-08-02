#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int n;
        cin >> n;

        while (n > 0)
        {
            int rem = n % 10;
            n = n / 10;
            if (rem == 4)
            {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}