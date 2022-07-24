#include <iostream>

using namespace std;

int main()
{
    int t, i;
    cin >> t;
    while (t--)
    {
        cin >> i;
        if (i % 2 == 0)
            cout << i / 2 << "\n";
        else
            cout << (i / 2) + 1 << "\n";
    }

    return 0;
}