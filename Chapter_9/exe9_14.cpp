#include <iostream>
#include <vector>
#include <list>
#include <string>

using namespace std;

int main()
{
    list<const char*> l{"hellow", "world", "!"};
    vector<string> v;
    v.assign(l.cbegin(), l.cend());

    for (const auto& c: v) {
        cout << c << endl;
    }
    return 0;   
}
