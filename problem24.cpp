#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k;
    cin>>n>>k;
    int array[n];
    for(int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    int count = 0;
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = i; j < n; j++)
        {
            sum = sum + array[j];
            if(sum >= k)
            {
                count++;
            }
        }
    }
    cout<<count;


    return 0;
}