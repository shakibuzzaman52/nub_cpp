#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int sum1 = 0, sum2 = 0;
    int max = 0;
    int winner = 0;
    while(t--)
    {

        int SI, TI;
        cin>>SI>>TI;

        sum1 = sum1 + SI;
        sum2 = sum2 + TI;


        if(sum1 > sum2)
        {
            if(sum1 - sum2 > max)
            {
                max = sum1 - sum2;
                winner = 1;
            }
        }
        else
        {
            if(sum2 - sum1 > max)
            {
                max = sum2- sum1;
                winner = 2;
            }
        }
    }
    cout<<winner <<" "<<max;

    return 0;
}