#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string preWord = "", word = "", maxWord = "";
    int maxRepeatTimes = 0, curRepeatTimes = 0;
    
    while (std::cin >> word) {
        if (preWord != word) {
            preWord = word;
            curRepeatTimes = 1;
        } else
            ++curRepeatTimes;

        if (curRepeatTimes > maxRepeatTimes) {
            maxRepeatTimes = curRepeatTimes;
            maxWord = word;
        }
    }

    if (maxRepeatTimes <= 1)
        std::cout << "No word has repeated." << std::endl;
    else
        std::cout << "The word " << maxWord << " repeats " << maxRepeatTimes << " times." << std::endl;
    
    return 0;
}