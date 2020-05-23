#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<char> str = {'h', 'e', 'l', 'l', 'o'};
    string s(str.begin(), str.end());
    for (const auto& ch: s) {
        cout << ch;
    }
    return 0;
}
