#include "Chapter6.h"
#include <iostream>

int fact(int num)
{
    int res = 1;
    while (num > 1) {
        res *= num--;
    }
    return res;
}

int myAbs(int num)
{
    return abs(num);
}