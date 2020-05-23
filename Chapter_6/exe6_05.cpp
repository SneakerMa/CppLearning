#include <iostream>

int myAbs(int num)
{
    return abs(num);
}

int main()
{
    int n;
    while (std::cin >> n) {
        std::cout << myAbs(n) << std::endl;
    }
    return 0;
}