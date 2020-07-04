#include <iostream>
#include <string>

using namespace std;

void erase_and_insert(string& s, const string& oldVal, const string& newVal)
{
    for (string::size_type i = 0; i != s.size(); ++i) {
        if (s.substr(i, oldVal.size()) == oldVal) {
            s.replace(i, oldVal.size(), newVal);
            i += newVal.size() - 1;
        }
    }
}

int main()
{
    {
        string str{"To drive straight thru is a foolish, tho courageous act."};
        erase_and_insert(str, "thru", "through");
        erase_and_insert(str, "tho", "though");
        std::cout << str << std::endl;
    }
    {
        string str{
            "To drive straight thruthru is a foolish, thotho courageous act."};
        erase_and_insert(str, "thru", "through");
        erase_and_insert(str, "tho", "though");
        std::cout << str << std::endl;
    }
    {
        string str{"To drive straight thru is a foolish, tho courageous act."};
        erase_and_insert(str, "thru", "thruthru");
        erase_and_insert(str, "tho", "though");
        std::cout << str << std::endl;
    }
    {
        string str{"my world is a big world"};
        erase_and_insert(str, "world",
                "worldddddddddddddddddddddddddddddddddddddddddddddddd");
        std::cout << str << std::endl;
    }
    return 0;
}