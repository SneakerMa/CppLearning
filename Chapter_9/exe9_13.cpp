#include <vector>
#include <list>
#include <iostream>

int main()
{
    std::list<int> l = {1, 2, 3, 4, 5};
    std::vector<double> vd(l.begin(), l.end());
    std::vector<int> vi(vd.begin(), vd.end());
    for (auto i = 0; i < 5; ++i) {
        std::cout << vd[i] << " " << vi[i] << std::endl;
    }
    return 0;
}
