#include <bits/stdc++.h>
using namespace std;
int main()
{
    double num;
    int count = 0;
    for(int i = 1; i < 7; i++)
    {
        cin>>num;
        if(num > 0)
        {
            count++;
        }
    }
    cout<<count<<" valores positivos"<<endl;
    return 0;
}