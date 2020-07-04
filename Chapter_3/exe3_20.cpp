#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums;
    int num, i = 0;
    while (std::cin >> num) {
        nums.push_back(num);
        i++;
        if (i != 0 && i % 2 == 0)
            std::cout << nums[i-2] + nums[i-1] << std::endl;
    }

    if (i == 0){
        std::cerr << "There are no num in nums" << std::endl;
        return -1;
    }
    if (i % 2){
        std::cerr << "The number of elements in nums is odd." << std::endl;
        return -1;
    }
    for (decltype(nums.size()) j = 0; j < nums.size() / 2; j++){
        std::cout << nums[j] + nums[nums.size() - j - 1] << std::endl;
    }
    return 0;
}
