#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> words{"cppprimer", "pezy", "learncpp",
                         "greater",   "rewrite", "programmer"};
    cout << count_if(words.cbegin(), words.cend(), [](const string& word) { return word.size() > 6; })
         << endl;
    return 0;
}