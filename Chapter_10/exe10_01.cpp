#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    int num;
    int val = 5;
    while (cin >> num) {
        v.push_back(num);
    }
    auto result = count(v.cbegin(), v.cend(), val);
    cout << result << endl; 
    return 0;
}
