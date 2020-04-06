#include <iostream>
#include <string>
 
using namespace std;
 
int main ()
{
   string str1 = "Hello";
   string str2 = "World";
   string str3;
   int  len ;
 
   // 复制 str1 到 str3
   str3 = str1;
   cout << "str3 : " << str3 << endl;
 
   // 连接 str1 和 str2
   str3 = str1 + str2;
   cout << "str1 + str2 : " << str3 << endl;
 
   // 连接后，str3 的总长度
   len = str3.size();
   cout << "str3.size() :  " << len << endl;

    int a[10] = {1,2,3,6,7};
    char b[6] = {'h','a','p','p','y','\0'};
    char c[] = "happy";
    cout << a << " " << sizeof(a) << endl;
    cout << b << " " << sizeof(b) << endl;
    cout << c << " " << sizeof(c) << endl;
 
   return 0;
}