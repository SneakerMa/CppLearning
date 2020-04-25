#include <iostream>
#include <string>

int main()
{
    std::string rsp;
    do {
        std::cout << "Please enter two strings: ";
        std::string str1, str2;
        std::cin >> str1 >> str2;

        if (str1.size() <= str2.size())
            std::cout << str1 << std::endl;
        else
            std::cout << str2 << std::endl;

        std::cout << "More? Enter yes or no: ";
        std::cin >> rsp;

    } while (!rsp.empty() && rsp != "no");

    return 0;
}
