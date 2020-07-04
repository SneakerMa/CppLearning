#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> text;
    std::string str;
    while (std::getline(std::cin, str))
        text.push_back(str);

    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
        for (char &s: *it)
            s = toupper(s);
        std::cout << *it << std::endl;
    }
    return 0;
}
