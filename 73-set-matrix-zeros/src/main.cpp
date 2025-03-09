#include <iostream>

class Solution {
    public:
    
    /*
    
    Where is 0 location:
    [1,1]
    
    Where is 0 location:
    [0, 0]
    [0, 3]
    
    row 0, all zero
    col 3, all zero
    */
    
        void setRowZeros(vector<vector<int>>& matrix, int row) {
            for (int i = 0; i < matrix[0].size(); ++i) {
                matrix[row][i] = 0;
            }
        }
    
    
        void setColZeros(vector<vector<int>>& matrix, int col) {
            for (int i = 0; i < matrix.size(); ++i) {
                matrix[i][col] = 0;
            }
        }
    
        void setZeroes(vector<vector<int>>& matrix) {
            int m = matrix.size();
            int n = matrix[0].size();
            set<int> row_bk; // row wise book keeper for what to set 0
            set<int> col_bk; // similiar for column
    
            for (int row = 0; row < m; ++row) {
                for (int col = 0; col < n; ++col) {
                    if (matrix[row][col] == 0) {
                        row_bk.insert(row);
                        col_bk.insert(col);
                    }
                }
            }
    
    
            for (auto& i : row_bk) {
                setRowZeros(matrix, i);
            }
    
            for (auto& j : col_bk) {
                setColZeros(matrix, j);
            }
    
            return;
        }
        
    };


int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
