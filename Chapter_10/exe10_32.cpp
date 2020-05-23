#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include "../Chapter_1/Sales_item.h"

using namespace std;

int main()
{
    istream_iterator<Sales_item> in_iter(cin), in_eof;
    vector<Sales_item> vec;
    copy(vec.begin(), vec.end(), back_inserter(vec));
    sort(vec.begin(), vec.end(), [](const Sales_item& lhs, const Sales_item& rhs) { return lhs.isbn() < rhs.isbn(); });
    for (auto beg = vec.cbegin(), end = beg; beg != vec.cend(); beg = end) {
        end = find_if(beg, vec.cend(), [beg](const Sales_item& item) {
            return item.isbn() != beg->isbn();
        });
        cout << accumulate(beg, end, Sales_item(beg->isbn())) << endl;
    }
    return 0;
}