#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
cin >> N;

bool prime = true;

for(int i = 2; i < N; i++)
{
    if(N % i == 0)
    {
        prime = false;
        break;
    }
}

if(prime)
{
    cout << "Yes";
}
else
{
    cout << "No";
}
    return 0;
}