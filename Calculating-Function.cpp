#include <iostream>
int main()
{
    long long int x;
    std::cin >> x;
    if (x % 2 == 0)
        std::cout << x / 2;
    else
        std::cout << '-' << (x / 2) + 1;
}