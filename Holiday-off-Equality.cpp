#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n);
    cout << ((a[n - 1] * n) - sum);
    return 0;
}