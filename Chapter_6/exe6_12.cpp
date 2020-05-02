#include <iostream>

void exchange(int &x, int &y)
{
    int temp = 0;
    temp = y;
    y = x;
    x = temp;
}

int main()
{
    int a = 1, b = 2;
    exchange(a, b);
    std::cout << a << " " << b << std::endl;
    return 0;
}