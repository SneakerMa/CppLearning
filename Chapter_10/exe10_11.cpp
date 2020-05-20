#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool isShorter(const string& s1, const string& s2)
{
    return s1.size() < s2.size();
}

void elimDups(vector<string>& words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

int main()
{
    vector<string> vs = {"1234", "1234", "1234", "Hi", "alan", "wang"};
    elimDups(vs);
    stable_sort(vs.begin(), vs.end(), isShorter);
    for (const auto& word: vs) {
        cout << word << endl;
    }
    return 0;
}
