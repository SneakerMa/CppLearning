#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>

using namespace std;
using namespace std::placeholders;

bool check_size(const string& s, string::size_type sz)
{
    return s.size() <= sz;
}

int main()
{
    vector<string> authors{"Mooophy", "pezy", "Queequeg90", "shbling", "evan617"};
    cout << count_if(authors.cbegin(), authors.cend(), bind(check_size, _1, 6)) << endl;
    return 0;
}
