#include <iostream>
#include <stdexcept>

int main()
{
    int num1, num2;
    std::cout << "Input two integers: ";
    while (std::cin >> num1 >> num2) {
        try {
            if (num2 == 0)
                throw std::runtime_error("Divisor is 0!");
            std::cout << num1 / num2 << std::endl;
            std::cout << "Input two Integers: ";
        } catch (std::runtime_error err) {
            std::cout << err.what()
                      << "\nTry again? Enter y or n" << std::endl;
            char c;
            std::cin >> c;
            if (!std::cin || c == 'n')
                break;
            else
                std::cout << "Input two integers: ";
        }
    }
    return 0;
}