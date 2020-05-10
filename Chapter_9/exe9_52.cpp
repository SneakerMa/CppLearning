#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{  
    const string expr("This is (Mooophy(awesome)((((wooooooooo))))) and (ocxs) over");
    const char repl = '#';
    int seen = 0;
    stack<char> stk;

    for (auto c: expr) {
        stk.push(c);
        if (c == '(') {
            ++seen;
        }
        if (seen && c == ')') {
            while (stk.top() != '(') {
                stk.pop();  
            }
            stk.pop();
            stk.push(repl);
            --seen;
        }
    }

    string output;
    for (; !stk.empty(); stk.pop()) {
        output.insert(output.begin(), stk.top());
    }
    cout << output << endl;
    return 0;
}
