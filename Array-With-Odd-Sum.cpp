#include <iostream>
using namespace std;
int main()
{
    int t, n, x, a = 0, b = 0, tp;
    cin >> t;
    while (t != 0)
    {
        cin >> n;
        tp = n;
        while (tp != 0)
        {
            cin >> x;
            if ((x % 2) == 0)
                a++;
            else
                b++;
            tp--;
        }
        if (b == 0 || (a == 0 && (n % 2) == 0))
            cout << "NO"
                 << "\n";
        else
            cout << "YES"
                 << "\n";
        a = 0;
        b = 0;
        t--;
    }

    return 0;
}