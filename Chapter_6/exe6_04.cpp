#include <iostream>

int fact(int num)
{
    int res = 1;
    while (num > 1) {
        res *= num--;
    }
    return res;
}

int main()
{
    int n;
    while (std::cin >> n) {
        std::cout << fact(n) << std::endl;
    }
    return 0;
}
