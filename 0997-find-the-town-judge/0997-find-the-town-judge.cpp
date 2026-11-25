class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size() == 0 && n == 1) return 1;

        
        vector<int> count(n+1);
        for(auto it : trust ) {
            count[it[0]]--; // Outdegree
            count[it[1]]++; // Indegree
        }
        for(int it = 0; it < count.size();it++) {
            if(count[it] == n-1) return it;
        }
        return -1;
    }
};