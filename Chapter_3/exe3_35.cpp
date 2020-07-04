#include <iostream>

int main()
{
    int nums[10] = {1,2,3,4,5,6,7,8,9};
    // int *p = &nums[0];
    for (int *p = std::begin(nums); p != std::end(nums); ++p)
        *p = 0;
    for (const int c: nums)
        std::cout << c;

    return 0;
}
