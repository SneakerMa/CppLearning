#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void elimDups(vector<string>& v)
{
    sort(v.begin(), v.end());
    auto new_end = unique(v.begin(), v.end());
    v.erase(new_end, v.end());
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);
    
    auto pivot = partition(words.begin(), words.end(), 
                      [sz](const string& a)
                        { return a.size() >= sz; });

    for (auto it = words.cbegin(); it != pivot; ++it) {
        cout << *it << " ";
    }
}

int main()
{
    std::vector<std::string> v{"the",  "quick", "red",  "fox", "jumps",
                               "over", "the",   "slow", "red", "turtle"};
    biggies(v, 4);
    return 0;
}
