#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto r_iter = vec.crbegin(); r_iter != vec.crend(); ++r_iter) {
        cout << *r_iter << endl;
    }
    return 0;
}
