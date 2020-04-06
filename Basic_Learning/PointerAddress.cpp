#include <iostream>

using namespace std;

int main(){

    short int height[10]; //int型的数组（short int 每个数据2字节）
    cout <<  "height       "<< height << endl 
         <<  "height+1     "<< height + 1 << endl
         <<  "&height[0]   " <<  &height[0] << endl
         <<  "&height+1    "<< &height + 1<< endl
         <<  "height+9     "<< height+9 << endl
         << "height+10    " << height + 10 << endl;

    /*
        height 与 &height[0] 值相等。
        height+1 = height + 2 字节 = height + 1 个 short int 也即 一个数组元素。
        height+9 为 height[] 中最后一个元素的地址，height+10 为该数组结束后的第一个地址。
        &height +1=height+10，即执行 &height+1 的结果是地址跳到整个数组之后第一个地址。
    */
}