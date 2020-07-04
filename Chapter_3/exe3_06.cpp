#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    for (auto &c : str){
        if (isalpha(c))
            c = 'X';
    }
    cout << str << endl;
    return 0;
}
