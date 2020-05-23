#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    istream_iterator<int> item_iter(cin), eof;
    ostream_iterator<int> out_iter(cout, " ");
    vector<int> vec;
    copy(item_iter, eof, back_inserter(vec));
    sort(vec.begin(), vec.end());
    copy(vec.cbegin(), vec.cend(), out_iter);
    return 0;
}
