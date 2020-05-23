#include <iostream>

using namespace std;

int main()
{
    int local_val = 7;
    auto decreaseNum = [&local_val]() -> bool {
        if (local_val == 0) {
            return true;
        } else {
            --local_val;
            return false;
        }
    };
    while (!decreaseNum()) {
        cout << local_val << endl;
    }
    return 0;
}