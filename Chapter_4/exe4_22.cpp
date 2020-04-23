#include <iostream>
#include <vector>

int main()
{
    int grade;
    while (std::cin >> grade) {
        std::cout << ((grade > 90) ? "high pass" : ((grade > 75) ? "pass" : 
            ((grade > 60) ? "low pass" : "fail"))) << std::endl;

        if (grade > 90)
            std::cout << "high pass" << std::endl;
        else if (grade > 75)
            std::cout << "pass" << std::endl;
        else if (grade >= 60)
            std::cout << "low pass" << std::endl;
        else
            std::cout << "fail" << std::endl;
    }
    return 0;
}
