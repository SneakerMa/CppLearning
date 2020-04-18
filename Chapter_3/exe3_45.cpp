#include <iostream>
#include <vector>

int main()
{
    int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

    for (const auto &row : ia)
        for (auto col: row)
            std::cout << col;
    std::cout << std::endl;

    for (auto p = ia; p != ia + 3; ++p)
        for (int *q = *p; q != *p + 4; ++q)
            std::cout << *q;
    return 0;
}
