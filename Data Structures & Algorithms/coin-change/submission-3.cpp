class Solution {
public:
    int getDenomination(vector<int>& coins, int amount,vector<int>&dp) {

        if (amount == 0) {
            return dp[amount]=0;
        }

        if (amount < 0) {
            return INT_MAX;
        }
        if(dp[amount]!=-1)return dp[amount];

        int minWays = INT_MAX;

        for (int i = 0; i < coins.size(); i++) {

            int result = getDenomination(coins, amount - coins[i],dp);

            if (result != INT_MAX) {
                minWays = min(minWays, 1 + result);
            }
        }

        return dp[amount]=minWays;
    }

    int coinChange(vector<int>& coins, int amount) {

        vector<int>dp(amount+1,-1);
        dp[0]=0;

        int result = getDenomination(coins, amount,dp);

        return result == INT_MAX ? -1 : result;
    }
};