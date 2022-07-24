#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t, a, b, c, n, s, m;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> n;
        s = a + b + c + n;
        m = max(a, max(b, c));
        if (s % 3 == 0 && s / 3 >= m)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}