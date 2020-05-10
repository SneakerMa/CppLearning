#include <iostream>
#include <string>

using namespace std;

string newname(const string& name, const string& pre, const string& post)
{
    auto ret = name;
    ret.insert(0, pre);
    ret.insert(ret.size(), post);
    return ret;
}

int main()
{
    std::string name("Alan");
    std::cout << newname(name, "Mr.", " Jr.") << std::endl;

    return 0;
}