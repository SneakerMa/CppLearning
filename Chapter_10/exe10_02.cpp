#include <iostream>
#include <algorithm>
#include <list>
#include <string>

using namespace std;

int main()
{
    list<string> l;
    string str;
    string findstr = "hello";
    while (cin >> str) {
        l.push_back(str);
    }
    auto result = count(l.cbegin(), l.cend(), findstr);
    cout << result << endl; 
    return 0;
}