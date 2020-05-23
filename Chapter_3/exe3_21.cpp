#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> strs;
    std::string str;
    while (std::cin >> str) 
        strs.push_back(str);
    
    for (auto it = strs.begin(); it != strs.end() && !it->empty(); ++it)
        std::cout << *it << std::endl;

    return 0;
}
