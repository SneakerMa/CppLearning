#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    int& val1 = v.at(0);
    int& val2 = v[0];
    int& val3 = *v.begin();
    int& val4 = v.front();
    return 0;
}