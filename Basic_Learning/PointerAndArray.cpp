#include <iostream>
using namespace std;

int main ()
{
    int var[3] = {10,100,200};
    int *p=var;
    cout << "!" << p << endl;
    for (int i = 0; i < 3; i++)
    {
        // cout << *(var++) << endl;    //编译错误，因为var是数组名（也是数组首元素地址），不是一个变量，不可修改其值
        cout << *(var+i) << endl; //编译正确，因为没有对var进行赋值，只是通过与i相加访问变量地址
        cout<<  *(p++)<<endl;        ///编译正确，p为指针变量可赋值
        cout << "!" << p << endl;
    }

    /*
        var++ 实际上是 var=var+1，
        而var是常量，不能出现在=（赋值符号）的左边，但是 *（var+i）、&var[i]都是允许的
    */
    /*
        int *ptr[3]; 
        由于 C++ 运算符的优先级中，* 小于 []，所以 ptr 先和 [] 结合成为数组，
        然后再和 int * 结合形成数组的元素类型是 int * 类型，得到一个叫一个数组的元素是指针，简称指针数组。

        int *(ptr[3]);
        这个和上面的一样，优先级顺序是 * 小于 ()，() 等于 []。
        ptr 先和 [] 结合成为数组，然后再和 int * 结合形成数组的元素类型是 int * 类型，得到一个叫一个数组的元素是指针。

        int (*ptr)[3];
        这个就不一样了，优先级顺序是 * 小于 ()，() 等于 []，() 和 [] 的优先级一样，
        但是结合顺序是从左到右，所以先是 () 里的 * 和 ptr 结合成为一个指针，
        然后是 (*ptr) 和 [] 相结合成为一个数组，最后叫一个指针 ptr 指向一个数组，简称数组指针。
    */

    const char *names[5]  = {
                        "ABC",
                        "DEF",
                        "GHI",
                        "JKL",
                        "MNO"
                    };
    cout << &names << endl;
    for (int i = 0; i < 5; i++) {
        cout << " --- names[i]              = " << names[i] << endl;
        //cout<<*names[i]<<endl; 输出结果为对应得指针数组的第一个字符，
        //因为 *name 代表指向数组的第一个地址的值
        cout << " --- *names[i]             = " << *names[i] << endl;
        cout << endl;
        cout << " --- (*names[i] + 1)       = " << (*names[i] + 1) << endl;
        cout << " --- (char)(*names[i] + 1) = " << (char)(*names[i] + 1) << endl;
        cout << " ------------------------------------ " << endl << endl << endl << endl;
    }
    return 0;

    return 0;
}
