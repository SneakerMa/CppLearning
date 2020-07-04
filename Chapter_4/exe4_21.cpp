#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums{1, 3, 23, 6, 4, 3, 3};
    for (auto &n : nums) {
        n = ((n % 2 == 1) ? 2 * n : n);
        std::cout << n << std::endl;
    }
    return 0;
}