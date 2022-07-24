#include <iostream>
int main()
{
    int t, s, r;
    std::cin >> t;
    while (t--)
    {
        long long int a, b;
        std::cin >> a >> b;
        r = a % b;
        s = b - r;
        if (a % b == 0)
            std::cout << "0" << std::endl;
        else
            std::cout << s << std::endl;
    }
}