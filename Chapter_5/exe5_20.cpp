#include <iostream>
#include <string>

int main()
{
    std::string preStr = "", curStr = "";
    bool flag = false;
    while (std::cin >> curStr) {
        if (curStr == preStr) {
            flag = true;
            break;
        } else
            preStr = curStr;
    }
    std::cout << (flag ? curStr : "There is no repeat word.") << std::endl;
    return 0;
}
