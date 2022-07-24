#include <iostream>
#include <vector>
int main()
{
    int t, i;
    std::cin >> t;
    while (t--)
    {
        std::vector<int> a;
        int n;
        std::cin >> n;
        if (n % 10 != 0)
        {
            a.push_back(n % 10);
        }
        n = n - (n % 10);
        if (n % 100 != 0)
        {
            a.push_back(n % 100);
        }
        n = n - (n % 100);
        if (n % 1000 != 0)
        {
            a.push_back(n % 1000);
        }
        n = n - (n % 1000);
        if (n % 10000 != 0)
        {
            a.push_back(n % 10000);
        }
        n = n - (n % 10000);
        if (n >= 10000 && n % 10000 == 0)
        {
            a.push_back(n);
        }
        std::cout << a.size() << std::endl;
        for (i = 0; i < a.size(); i++)
        {
            std::cout << a[i] << " ";
        }
    }
}