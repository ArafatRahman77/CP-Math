#include <iostream>
int main()
{
    long int n;
    std::cin >> n;
    if (n % 2 == 0)
        std::cout << "4"
                  << " " << n - 4;
    else
        std::cout << "9"
                  << " " << n - 9;
}