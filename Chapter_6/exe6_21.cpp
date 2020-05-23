#include <iostream>

int compare(const int a, const int * const ptr)
{
    return (a >= *ptr) ? a : *ptr;
}

int main()
{
    int num1, num2;
    int *p = &num2;
    while (std::cin >> num1 >> num2) {
        std::cout << compare(num1, p) << std::endl;
    }
    return 0;
}