#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    vector<int> v = {0, 1, 2, 3, 4, 5};
    int result = accumulate(v.cbegin(), v.cend(), 0);
    cout << result << endl;
    return 0;
}
