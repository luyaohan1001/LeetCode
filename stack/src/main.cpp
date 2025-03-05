#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    string str = "hello";

    stack<char> stk;
    for (auto it = str.begin(); it != str.end(); ++it) {
        stk.push(*it);
    }

    string reversed = "";
    while (!stk.empty()) {
        reversed += stk.top();
        stk.pop();
    }
    cout << "reversed: " << reversed << endl;
    return 0;
}
