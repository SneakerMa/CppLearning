#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    vector<int> a{1, 2, 3};
    vector<int> b{1, 2};
    list<int> c{1, 2, 3};
    cout << boolalpha << (vector<int>(c.cbegin(), c.cend()) == a) << endl;
    cout << boolalpha << (vector<int>(c.cbegin(), c.cend()) == b) << endl;

    return 0;
}
