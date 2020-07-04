#include <iostream>
#include <string>

bool has_upper(const std::string& str)
{
    for (const auto c: str) {
        if (isupper(c)) {
            return true;
        }
    }
    return false;
}

void lower2upper(std::string& str)
{
    for (auto& c: str) {
        if (islower(c)) {
            c = toupper(c);
        }
    }
}

int main()
{
    std::string str = "";
    while (std::cin >> str) {
        std::cout << has_upper(str) << std::endl;
        lower2upper(str);
        std::cout << str << std::endl;
    }
    return 0;
}