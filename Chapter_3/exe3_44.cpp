#include <iostream>
#include <vector>

int main()
{
    using int_array = int[4];

    int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

    for (int_array *p = ia; p != ia + 3; ++p)
        for (int *q = *p; q != *p + 4; ++q)
            std::cout << *q;
    return 0;
}
