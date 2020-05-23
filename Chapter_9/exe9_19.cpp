#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
    list<string> input;
    for (string str; cin >> str; input.push_back(str)) {}

    for (const auto& s: input) {
        cout << s << endl;
    }
    return 0;
}