#include <iostream>
#include <algorithm>
int main()
{
    long long int a[4];
    int i;
    for (i = 0; i < 4; i++)
    {
        std::cin >> a[i];
    }
    std::sort(a, a + 4);
    std::cout << a[3] - a[0] << " " << a[3] - a[1] << " " << a[3] - a[2];
}