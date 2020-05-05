#include <iostream>
#include <sstream>
#include <string>

std::istream& fun(std::istream& is)
{
    std::string buf;
    while (is >> buf) {
        std::cout << buf << std::endl;
    }
    is.clear();
    return is; 
}

int main()
{
    std::istringstream iss("Hello World!");
    fun(iss);
    return 0;
}