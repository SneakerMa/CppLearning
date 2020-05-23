#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> li = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto it = li.begin();
    while (it != li.end()) {
        if (*it % 2) {
            it = li.insert(it, *it);
            advance(it, 2);
        } else {
            it = li.erase(it);
        }
    }
    for (const auto& i: li) {
        cout << i;
    }
    return 0;
}
