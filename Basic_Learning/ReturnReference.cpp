#include <iostream>

using namespace std;

int &changevalue()
{
    static int a_return = -29;
    return a_return;
}

int main()
{
    int &a_return = changevalue();
    a_return = 20;
    cout << changevalue() << endl;
}
