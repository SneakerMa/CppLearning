#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums(10, 0);
    cout << nums.size() << " " << nums.capacity() << endl;
    while (nums.size() != nums.capacity()) {
        nums.push_back(0);
    }
    nums.push_back(0);
    cout << nums.capacity() << endl;
    return 0;
}
