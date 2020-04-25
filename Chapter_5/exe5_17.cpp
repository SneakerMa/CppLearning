#include <iostream>
#include <vector>

bool main()
{
    std::vector<int> nums1, nums2;
    int num;
    while (std::cin >> num)
        nums1.push_back(num);
    while (std::cin >> num)
        nums2.push_back(num);

    auto length = nums1.size() <= nums2.size() ? nums1.size() : nums2.size();
    for (decltype(nums1.size()) i = 0; i < length; ++i) {
        if (nums1[i] != nums2[i])
            return false;
    }
    return true;
}