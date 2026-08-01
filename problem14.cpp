#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h, m;
    cin>>h>>m;
    double k = 30*h-5.5*m;
    if(k > 180)
    {
        cout<<360-k<<endl;
    }
    else
    cout<<k<<endl;

    return 0;
}