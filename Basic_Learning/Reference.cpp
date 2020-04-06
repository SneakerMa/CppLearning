#include <iostream>

using namespace std;

int main()
{
    int rats = 100;
    int &rodent = rats;

    cout << "rats = " << rats << ", rosent = " << rodent << endl;
    cout << "rats address = " << &rats << endl;
    cout << "rosent address = " << &rodent << endl;

    cout << "===================================" << endl;
    int bunnies = 50;
    rodent = bunnies;

    cout << "rats = "<< rats << ", rosent = " << rodent << ", bunnies = " << bunnies << endl;
    cout << "rats address = " << &rats << endl;
    cout << "rosent address = " << &rodent << endl;
    cout << "bunniess address = " << &bunnies << endl;
    /*
        从结果可以看出，虽然在调用 rodent = bunnies; 后引用 rosent 的值变为 50，
        但是 rosent 所指向的地址空间还是指向了 rats，没有发生改变，
        说明 rodent = bunnies; 只是将 bunnies 的值赋值给引用 rodent 所指向的变量，没有改变引用的指向。
    */

    return 0;
}