#include <iostream>

void reset(int &i)
{
    i = 0;
}

int main()
{
    int a = 1;
    reset(a);
    std::cout << a << std::endl;
    return 0;
}