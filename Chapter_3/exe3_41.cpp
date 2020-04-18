#include <iostream>
#include <vector>

int main()
{
    int nums[5] = {1, 2, 3, 4, 5};
    std::vector<int> nums2(std::begin(nums), std::end(nums));
    for (auto n: nums2)
        std::cout << n;
    return 0;
}
