#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<string> vec;
    string word;
    while (cin >> word) {
        vec.push_back(word);
    }

    sort(vec.begin(), vec.end());
    vector<string>::iterator end_unique = unique(vec.begin(), vec.end());
    vec.erase(end_unique, vec.end());
    for (const auto& str: vec) {
        cout << str << endl;
    }
    return 0;
}