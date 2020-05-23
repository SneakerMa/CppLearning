#include <vector>

bool func(std::vector<int>::iterator beg, std::vector<int>::iterator end, int value)
{
    for (auto iter = beg; iter != end; ++iter) {
        if (*iter == value) {
            return true;
        }
    }
    return false;
}
