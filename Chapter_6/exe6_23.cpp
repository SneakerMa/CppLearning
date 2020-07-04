#include <iostream>

void print(int* const p)
{
    if (p)
        std::cout << *p << std::endl;
}

void print(const int *beg, const int *end)
{
    while (beg != end) {
        std::cout << *beg++ << std::endl;
    }
}

void print(const int ia[], size_t size)
{
    for (size_t i = 0; i < size; ++i) {
        std::cout << ia[i] << std::endl;
    }
}

int main()
{
    int i = 0, j[2] = {0, 1};
    print(&i);
    print(j);
    print(std::begin(j), std::end(j));
    print(j, std::end(j) - std::begin(j));
    return 0;
}