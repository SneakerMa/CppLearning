#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    list<int> lst{1, 2, 3, 0, 1, 2, 0, 1, 2};
    auto res = find(lst.crbegin(), lst.crend(), 0);
    cout << *res << " " << *res.base() << endl;
    return 0;
}