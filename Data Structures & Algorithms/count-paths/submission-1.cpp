class Solution {
public:
    int getPaths(int m,int n,vector<vector<int>>&dp){


        if (m==0 || n==0)return dp[m][n]=1;
        if(dp[m][n]!=-1)return dp[m][n];

        int ways= getPaths(m-1,n,dp) + getPaths(m,n-1,dp);

        return dp[m][n]=ways;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        
        return getPaths(m-1,n-1,dp);
    }
};
