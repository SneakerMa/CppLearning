#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> v(ia, end(ia));
    list<int> l(v.begin(), v.end());

    auto itv = v.begin();
    auto itl = l.begin();
    while (itl != l.end()) {
        if (*itl % 2) {
            itl = l.erase(itl);
        } else {
            ++itl;
        }
    }
    while (itv != v.end()) {
        if (!(*itv % 2)) {
            itv = v.erase(itv);
        } else {
            ++itv;
        }
    }

    for (const auto& n: v) {
        cout << n << endl;
    }
    for (const auto& n: l) {
        cout << n << endl;
    }

    return 0;
}
