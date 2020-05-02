#include <iostream>

void switchptr(int *&p1, int *&p2)
{
    int *temp = p1;
    p1 = p2;
    p2 = temp;
}

int main()
{
    int num1, num2;
    while (std::cin >> num1 >> num2) {
        int *p1 = &num1, *p2 = &num2;
        switchptr(p1, p2);
        std::cout << *p1 << " " << *p2 << std::endl;
    }
    return 0;
}
