#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a{1, 2, 3};
    vector<int> b{1, 2, 3};
    cout << boolalpha << (a == b) << endl;

    return 0;
}
