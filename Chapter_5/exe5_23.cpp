#include <iostream>
#include <stdexcept>

int main()
{
    int num1, num2;
    while (std::cin >> num1 >> num2) {
        std::cout << num1 / num2 << std::endl;
    }
    return 0;
}