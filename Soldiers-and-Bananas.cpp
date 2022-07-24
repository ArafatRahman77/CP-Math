#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, k, m, sum = 0, i;
    cin >> n >> k >> m;
    for (i = 1; i <= m; i++)
    {
        sum += i * n;
    }
    if ((sum - k) < 0)
        cout << 0;
    else
        cout << abs(k - sum);
}