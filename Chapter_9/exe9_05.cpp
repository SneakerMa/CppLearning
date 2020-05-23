#include <vector>

using myIter = std::vector<int>::iterator;

myIter func(myIter beg, myIter end, int value)
{
    for (myIter iter = beg; iter != end; ++iter) {
        if (*iter == value) {
            return iter;
        }
    }
    return end;
}