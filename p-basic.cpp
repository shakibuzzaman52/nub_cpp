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
        int max_mod = 0;
        int answer;

        for (int i = 1; i <= n; i++)
        {
            int mod = n % i;
            if(mod >= max_mod)
            {
                max_mod = mod;
                answer = i;
            }

        }
        cout<<answer<<endl;
    }
    return 0;
}