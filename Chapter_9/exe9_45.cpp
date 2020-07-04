#include <iostream>
#include <string>

using namespace std;

string newname(const string& name, const string& pre, const string& post)
{
    auto ret = name;
    ret.insert(ret.begin(), pre.begin(), pre.end());
    ret.append(post);
    return ret;
}

int main()
{
    std::string name("Alan");
    std::cout << newname(name, "Mr.", " Jr.") << std::endl;

    return 0;
}