#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums;
    int n;
    while (std::cin >> n)
        nums.push_back(n);
    
    if (nums.empty()) {
        std::cerr << "There are no numbers in nums" << std::endl;
        return -1;
    }
    if (nums.size() % 2) {
        std::cerr << "The number of items in nums is odd" << std::endl;
        return -1;
    }

    for (auto it = nums.begin(); it != nums.end(); it += 2)
        std::cout << *it + *(it+1) << std::endl;

    for (auto beg = nums.begin(), end = nums.end()-1; beg < end; ++beg, --end)
        std::cout << *beg + *end << std::endl;

    return 0;
}
