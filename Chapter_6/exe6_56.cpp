#include <iostream>
#include <string>
#include <vector>

int f(int, int);
typedef decltype(f) fun;

int Add(int a, int b)
{
    return a + b;
}

int Sub(int a, int b)
{
    return a - b;
}

int Mul(int a, int b)
{
    return a * b;
}

int Div(int a, int b)
{
    return a / b;
}

std::vector<fun*> funs{Add, Sub, Mul, Div};

int main()
{
    for (auto i = funs.begin(); i != funs.end(); ++i) {
        std::cout << (*i)(2, 2) << std::endl;
    }
    return 0;
}