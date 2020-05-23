#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iterator>

using namespace std;

int main()
{
    fstream ifs("../data/book.txt");
    istream_iterator<string> item_iter(ifs), eof;
    ostream_iterator<string> out_iter(cout, "\n");
    vector<string> vec;

    copy(item_iter, eof, back_inserter(vec));
    copy(vec.cbegin(), vec.cend(), out_iter);
    return 0;
}
