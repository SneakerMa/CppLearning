#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    string newStr;
    cin >> str;
    for (char c: str){
        if (!ispunct(c))
            newStr += c;
    }
    cout << newStr << endl;
    return 0;
}
