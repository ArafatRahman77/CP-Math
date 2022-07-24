#include <iostream>
using namespace std;

int main()
{
    int t, m;
    cin >> t;
    while (t--)
    {
        cin >> m;
        if (m % 4 == 0)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}