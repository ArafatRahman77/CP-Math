#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, m, t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        if (m % 2 == 0)
            cout << n * (m / 2) << "\n";
        else
            cout << (n * (m - 1) / 2) + (n + 1) / 2 << "\n";
    }
    return 0;
}