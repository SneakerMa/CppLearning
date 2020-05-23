#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    ifstream input(argv[1]);

    if (!input) {
        cerr << "No Data?!" << endl;
        return -1;
    }

    vector<string> vecline;
    string line;
    while (getline(input, line))
        vecline.push_back(line);

    for (auto s: vecline) {
        istringstream iss(s);
        string word;
        while (iss >> word)
            cout << word << endl;
    }

    return 0;
}
