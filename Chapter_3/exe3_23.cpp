#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums;
    int n;
    while (std::cin >> n)
        nums.push_back(n);

    for (auto it = nums.begin(); it != nums.end(); ++it) {
        *it *= 2;
        std::cout << *it << std::endl;
    }
    return 0;
}
