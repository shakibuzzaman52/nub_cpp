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
    int value;
    cin>>value;
    int pos = -1;
    for( int i = 0; i < n; i++)
    {
        if(value == array[i])
        {
            pos = i;
            break;
        }
    }
    if(pos == -1)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<pos<<endl;
    }
    return 0;
}