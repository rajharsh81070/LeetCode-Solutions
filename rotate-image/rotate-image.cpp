class Solution {
public:
    void transpose(vector<vector<int>>& matrix) {
        int lenOfMatrix = matrix.size();
        for(int matrixIndexOuter=0; matrixIndexOuter<lenOfMatrix; matrixIndexOuter++) {
            for(int matrixIndexInner=matrixIndexOuter; matrixIndexInner<lenOfMatrix; matrixIndexInner++) {
                swap(matrix[matrixIndexOuter][matrixIndexInner], matrix[matrixIndexInner][matrixIndexOuter]);
            }
        }
    }
    void reverseRows(vector<vector<int>>& matrix) {
        int lenOfMatrix = matrix.size();
        for(int matrixIndex=0; matrixIndex<lenOfMatrix; matrixIndex++) {
            reverse(begin(matrix[matrixIndex]), end(matrix[matrixIndex]));
        }
    }
    
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        reverseRows(matrix);
    }
};