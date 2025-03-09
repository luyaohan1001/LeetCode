#include <iostream>

class Solution {
    public:
    /*
    A is palindrom, in order to grow out wards, aAa also needs to be palindrome.
    
    
    // keep an 2D arry indexing i,j which defines a sub string of s
    */
        bool is_pal(const string& s, int i, int j) {
            while (i < j) {
                if (s[i++] != s[j--]) return false;
            }
            return true;
        }
    
        string longestPalindrome(string s) {
            if (s.size() == 1) return string{s[0]};
            int maxlen = 0;
            string ans;
            vector<vector<int>> dict(s.size(), vector<int>(s.size(), -1));
    
            // Marking single char as 1 meaning itself is a palindrome
            for (int i = 0; i < s.size(); ++i) {
                dict[i][i] = 1;
            }
    
            for (int i = 0; i < s.size(); ++i) {
                for (int j = i; j < s.size(); ++j) {
                    // cout << "i: " << i << " j: " << j << endl;
                    if ((j - i + 1) <= 2) {
                        dict[i][j] = is_pal(s, i, j);
                    } else if (dict[i+1][j-1] != -1) {
                        dict[i][j] = dict[i + 1][j - 1] && (s[i] == s[j]);
                    } else {
                        dict[i][j] = is_pal(s, i, j);
                    }
    
                    if (dict[i][j]) {
                        // cout << "true: i: " << i << " j: " << j << " maxlen: " << maxlen << endl;
                        if ((j - i + 1) > maxlen) {
                            ans = s.substr(i, j - i + 1);
                            maxlen = j-i+1;
                        }
    
                    }
                }
            }
            return ans;
        }
    };

int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
