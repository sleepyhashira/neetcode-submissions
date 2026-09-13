class Solution {
public:

    int getSteps(int n,int numSteps,vector<int>&arr){
        
        if(n==0 || n==1)return arr[n]=1;

        if(arr[n]!=-1)
        return arr[n];

        numSteps =getSteps(n-1,numSteps,arr) + getSteps(n-2,numSteps,arr);

        return arr[n]=numSteps;
    }

    int climbStairs(int n) {
        vector<int>arr(n+1,-1);
        int numSteps=0;
        return getSteps(n,numSteps,arr);
        
    }
};
