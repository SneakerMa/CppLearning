#include <iostream>
#include <vector>

void print(std::vector<int>::iterator beg, std::vector<int>::iterator end)
{
#ifndef NDEBUG
    std::cout << end - beg << std::endl;
#endif
    if (beg != end) {
        std::cout << *beg << " " << std::endl;
        print(++beg, end);
    }
}

int main()
{
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    print(vec.begin(), vec.end());
}