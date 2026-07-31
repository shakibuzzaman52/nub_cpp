#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rainy, cloudy;
    cin>>rainy>>cloudy;
    int clear = 7 - (rainy + cloudy);
    cout<<clear;

    return 0;
}