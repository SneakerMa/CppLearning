#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> strs;
    std::string str;
    while (std::cin >> str) {
        for (char &c: str) {
            c = toupper(c);
        }
        strs.push_back(str);
    }
    for (decltype(strs.size()) i = 0; i < strs.size(); ++i){
        std::cout << strs[i] << std::endl;
    }
    return 0;
}
