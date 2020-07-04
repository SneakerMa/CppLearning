#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "..\Chapter_7\exe7_26.h"

using namespace std;

int main()
{
    Sales_data d1("CppPrimer"), d2("JavaCore"), d3("PythonCookBook"),
        d4("CppCore"), d5("AwesomeCPP");
    std::vector<Sales_data> v{d1, d2, d3, d4, d5};

    sort(v.begin(), v.end(),
         [](const Sales_data& a, const Sales_data& b)
            { return a.isbn() < b.isbn(); });
    for (const auto& element: v) {
        cout << element.isbn() << endl;
    }
    return 0;
}
