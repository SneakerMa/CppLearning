#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    decltype(str.size()) i = 0;
    while (i < str.size()) {
        str[i] = 'X';
        i++;
    }
    cout << str << endl;
    for (i = 0; i < str.size(); i++)
        str[i] = 'x';

    cout << str << endl;
    return 0;
}
