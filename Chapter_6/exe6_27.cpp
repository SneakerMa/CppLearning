#include <iostream>


int sum(const std::initializer_list<int> &il)
{
    int res = 0;
    for (auto i: il) {
        res += i;
    }
    return res;
}

int main()
{
    std::cout << sum({1, 2, 3, 4, 5}) << std::endl;
    return 0;
}