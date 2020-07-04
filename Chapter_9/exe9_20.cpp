#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main()
{
    list<int> l{1, 2, 3, 4, 6, 5};
    deque<int> d1;
    deque<int> d2;
    for (const auto n: l) {
        (n & 0x1 ? d1 : d2).push_back(n);
    }
    for (const auto& n: d1) {
        cout << n << endl;
    }
    for (const auto& n: d2) {
        cout << n << endl;
    }
    return 0;
}

