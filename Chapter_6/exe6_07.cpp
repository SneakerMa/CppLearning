#include <iostream>

size_t count_calls(int n)
{
    static size_t ctr = 0;
    std::cout << n << std::endl;
    return ++ctr;
}

int main()
{
    int num = 0;
    for (size_t i = 0; i != 10; ++i) {
        std::cout << count_calls(num) << std::endl;
    }
    return 0;
}
