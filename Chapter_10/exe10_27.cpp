#include <iostream>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    vector<int> vec{3, 5, 1, 5, 1, 7, 3, 7, 9};
    list<int> lst;

    sort(vec.begin(), vec.end());
    unique_copy(vec.begin(), vec.end(), back_inserter(lst));
    for (const int& n: lst) {
        cout << n << endl;
    }
    return 0;
}
