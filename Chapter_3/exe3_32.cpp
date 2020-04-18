#include <iostream>
#include <vector>

int main()
{
    int nums[10];
    for (size_t i = 0; i < 10; ++i)
        nums[i] = i;

    int nums2[10];
    for (size_t i = 0; i < 10; ++i)
        nums2[i] = nums[i];

    std::vector<int> nums3(10);
    for (auto it = nums3.begin(); it != nums3.end(); ++it)
        *it = it - nums3.begin();

    std::vector<int> nums4(nums3);
    
    return 0;
}
