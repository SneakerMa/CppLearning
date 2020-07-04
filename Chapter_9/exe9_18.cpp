#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main()
{
    deque<string> input;
    for (string str; cin >> str; input.push_back(str)) {}

    for (const auto& s: input) {
        cout << s << endl;
    }
    return 0;
}