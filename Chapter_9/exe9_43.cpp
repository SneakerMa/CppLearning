#include <iostream>
#include <string>

using namespace std;

void erase_and_insert(string& s, const string& oldVal, const string& newVal)
{
    const auto olddis = distance(oldVal.begin(), oldVal.end());
    for (auto beg = s.begin(); distance(beg, s.end()) >= olddis;) {
        if (string(beg, beg + oldVal.size()) == oldVal) {
            beg = s.erase(beg, beg + oldVal.size());
            beg = s.insert(beg, newVal.cbegin(), newVal.cend());
            advance(beg, newVal.size());
        } else {
            ++beg;
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