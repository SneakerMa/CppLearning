#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

void find_insert (forward_list<string>& flst, const string& to_find, const string& to_add)
{
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    for (; curr != flst.end(); ++curr) {
        if (*curr == to_find) {
            flst.insert_after(curr, to_add);
            return;
        } else {
            prev = curr;
        }
    }
    if (curr == flst.end()) {
        flst.insert_after(prev, to_add);
    }
    return;
}

int main()
{
    forward_list<string> l{ "a", "b", "c", "d", "e", "f" };
	forward_list<string> r{ "a", "b", "c", "g", "d", "e", "f" };
	find_insert(l, "c", "g");
    cout << (l == r) << endl;

    forward_list<string> l2{ "a", "b", "c", "d", "e", "f" };
	forward_list<string> r2{ "a", "b", "c", "d", "e", "f", "g" };
	find_insert(l2, "g", "g");
    cout << (l2 == r2) << endl;

    return 0;
}
