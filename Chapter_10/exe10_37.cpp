#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> r_vec(7 - 3 + 1);
    reverse_copy(vec.cbegin()+3, vec.cbegin()+8, r_vec.begin());
    for (const int& n: r_vec) {
        cout << n << " ";
    }
    return 0;
}
