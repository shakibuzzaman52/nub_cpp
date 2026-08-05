#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n];
    for(int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            sum = sum + array[i]*array[j];
        }
    }

    cout<<sum<<endl;
    
    return 0;
}