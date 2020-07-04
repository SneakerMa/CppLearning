#include <iostream>
#include <string>

class Person{
    friend std::istream &read(std::istream &, Person &);
    friend std::ostream &print(std::ostream &, const Person &);

private:
    std::string name;
    std::string address;

public:
    std::string getName() { return name; }
    std::string getAddress() { return address; }

    Person() = default;
    Person(const std::string &sname, const std::string &saddr): name(sname), address(saddr) {}
    explicit Person(std::istream &is) { read(is, *this); }
};

std::istream &read(std::istream &is, Person &person)
{
    is >> person.name >> person.address;
    return is;
}

std::ostream &print(std::ostream &os, const Person &person)
{
    os << person.name << " " << person.address;
    return os;
}
