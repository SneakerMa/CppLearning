#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isLargerOrEqualToFive(const string& str)
{
    return str.size() >= 5;
}

int main()
{
    vector<string> words = {"a", "as", "aasss", "aaaaassaa", "aaaaaabba", "aaa"};
    auto pivot = partition(words.begin(), words.end(), isLargerOrEqualToFive);
    for (auto it = words.cbegin(); it != pivot; ++it) {
        cout << *it << endl;
    }
    return 0;
}