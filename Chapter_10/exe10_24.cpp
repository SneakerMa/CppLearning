#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;
using namespace std::placeholders;

inline bool check_size(const string& s, string::size_type sz)
{
    return s.size() < sz;
}

inline vector<int>::const_iterator findFirstInt(const vector<int>& v, const string& s)
{
    return find_if(v.cbegin(), v.cend(), bind(check_size, s, _1));
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7};
    string s("test");
    cout << *findFirstInt(v, s) << endl;
    return 0;
}
