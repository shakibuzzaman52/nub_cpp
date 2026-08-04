#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, P;
    cin >> N >> M >> P;

    if (M > N)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << (N - M) / P + 1 << endl;
    }

    return 0;
}