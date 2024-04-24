#include <iostream>
#include <stack>
#include <memory>

using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto c: s) {
            if (c == '{' || c == '(' || c == '[') {
                st.push(c);
            } else if (c == '}') {
                if (st.empty() || st.top() != '{') {
                    return false;
                } else {
                    st.pop();
                }

            } else if (c == ')') {
                if (st.empty() || st.top() != '(') {
                    return false;
                } else {
                    st.pop();
                }
                
            } else if (c == ']') {
                if (st.empty() || st.top() != '[') {
                    return false;
                } else {
                    st.pop();
                }
            }
        }
        if (st.empty()) {
            return true;
        } else {
            return false;
        }
    }
};

int main(int argc, char const *argv[])
{
    string s1 = "(({{}}{[{}[asdasd)]]}))";
    string s2 = "[()]";
    std::unique_ptr<Solution> p_solution(new Solution());
    cout << "s1: is_valid parenthesis: " << bool(p_solution->isValid(s1)) << endl;
    cout << "s2: is_valid parenthesis: " << bool(p_solution->isValid(s2)) << endl;
    return 0;
}
