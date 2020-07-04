#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct PersonInfo {
    string name;
    vector<string> phones;
};

bool valid(const string& str)
{
    return isdigit(str[0]);
}

string format(const string& str)
{
    return str.substr(0, 3) + "-" + str.substr(3, 3) + "-" + str.substr(6);
}

int main(int argc, char* argv[])
{
    ifstream input(argv[1]);

    if (!input) {
        cerr << "No Data?!" << endl;
        return -1;
    }

    string line, word;
    vector<PersonInfo> people;
    istringstream record;
    
    while (getline(input, line)) {
        PersonInfo info;
        record.clear();
        record.str(line);
        record >> info.name;
        while (record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }

    for (const auto &entry: people) {
        ostringstream foramtted, badNum;
        for (const auto &phone: entry.phones) {
            if (!valid(phone))
                badNum << " " << phone;
            else
                foramtted << " " << format(phone);
        }
        if (badNum.str().empty())
            cout << entry.name << " " << foramtted.str() << endl;
        else
            cerr << "input error: " << entry.name << " invalid numbers(s) "
                 << badNum.str() << endl;
    }
    
    return 0;
}

