#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> strs;
    std::string str;
    while (std::cin >> str) {
        strs.push_back(str);
    }
    for (std::vector<int>::size_type i = 0; i < strs.size(); ++i){
        std::cout << strs[i] << std::endl;
    }
    return 0;
}
