#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers;
    int num;

    while (std::cin >> num) {
        numbers.push_back(num);
    }
    return 0;
}
