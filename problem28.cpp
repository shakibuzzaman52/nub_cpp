#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long array[n];
    for(int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    long long min = array[0];
    int pos = 1;

    for(int i = 1; i < n; i++)
    {
        if(min > array[i])
        {
            min = array[i];
            pos = i + 1;
        }
    }
    cout<<min<<" "<<pos;
    return 0;
}