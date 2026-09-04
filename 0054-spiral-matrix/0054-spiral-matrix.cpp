class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if(matrix.empty()) 
        return res;

        int rowBegin = 0;
        int rowEnd = matrix.size() -1;
        int colBegin = 0;
        int colEnd = matrix[0].size()-1;
        while(rowBegin<=rowEnd && colBegin<=colEnd) {
            // 1. left Traversal Left --> Right
            for(int j = colBegin;j<=colEnd;j++) {
                res.push_back(matrix[rowBegin][j]);
            }
            //  Up to down in Column End
            rowBegin++;
            for(int i=rowBegin;i<=rowEnd;i++) {
                res.push_back(matrix[i][colEnd]);
            }
            colEnd--;
            if(rowBegin <= rowEnd) {
            // Right to Left
                for(int k=colEnd;k>=colBegin;k--) {
                res.push_back(matrix[rowEnd][k]);
                } 
            }
             rowEnd--;
            //  Traverse from Down to Up 
            if(colBegin <= colEnd) {
                for(int j = rowEnd;j>=rowBegin;j--) {
                res.push_back(matrix[j][colBegin]);
                }
            }
            colBegin++;
            
        }
        return res;
    }
};