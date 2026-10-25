// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
//        int n = numRows;
//         vector<vector<int>> outer;
//     for(int i=0;i<n;i++) {
//         vector<int> inner(i+1);
//         for(int j=0;j<=i;j++) {
//             if(j==0 || j == inner.size()-1)  {
//             inner[0] = 1;
//             inner[inner.size()-1] = 1;
//             }
//             else {
                
//                 inner[j] = outer[i-1][j-1]+outer[i-1][j];
//             }

//         }
//         outer.push_back(inner);
//     }
//     return outer; 
//     }
// };


// Optimal Solution for this one without using any auxillary space 


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       int n = numRows;
        vector<vector<int>> outer;
    for(int i=0;i<n;i++) {
        outer.push_back(vector<int> (i+1,1));
        for(int j=1;j<i;j++) {
                outer[i][j] = outer[i-1][j-1]+outer[i-1][j]; 
        }
    }
    return outer; 
    }
};