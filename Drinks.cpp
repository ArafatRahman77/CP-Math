#include <iostream>
int main()
{
    int n, temp;
    float sum = 0, m;
    std::cin >> n;
    temp = n;
    while (temp--)
    {
        std::cin >> m;
        sum = sum + m;
    }
    std::cout << sum / n;
}