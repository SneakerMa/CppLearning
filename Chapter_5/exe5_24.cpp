#include <iostream>
#include <stdexcept>

int main()
{
    int num1, num2;
    while (std::cin >> num1 >> num2) {
        if (num2 == 0)
            throw std::runtime_error("Divisor is 0!");
        std::cout << num1 / num2 << std::endl;
    }
    return 0;
}