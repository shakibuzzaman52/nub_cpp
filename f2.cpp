#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int h = n / 3600;
    int b;
    b = n % 3600;
    int m = b / 60;
    b = b % 60;
    int s = b;
    cout<<h<<":"<<m<<":"<<s<<endl;
    return 0;
}