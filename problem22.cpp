#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mountain[n];
        for(int i = 0; i < n; i++)
        {
            cin>>mountain[i];
        }
        int max = mountain[0];
        for(int i = 1; i < n; i++)
        {
            if(mountain[i] > max)
            {
                max = mountain[i];
            }
        }
        cout<<max<<endl;;
    }
    return 0;
}