#include <iostream>
int main()
{
    int x, m, s;
    std::cin >> x;
    s = x / 5;
    m = x % 5;
    if (m != 0)
        std::cout << s + 1;
    else
        std::cout << s;
}