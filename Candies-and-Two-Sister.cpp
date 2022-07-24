#include <iostream>
int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        if (n == 2 || n == 1 || n == 0)
            std::cout << "0" << std::endl;
        else
            std::cout << (n - 1) / 2 << std::endl;
    }
}