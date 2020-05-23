#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums(5, 1);
    int n[5];
    for (size_t i = 0; i < 5; ++i)
        n[i] = nums[i];
    return 0;
}
