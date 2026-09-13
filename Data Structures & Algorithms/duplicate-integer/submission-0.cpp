class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        bool hasDuplicate =false;
        map<int,int>m;

        for (auto x: nums){
            if (m.find(x) != m.end()){
                return true;
            }else{
                m[x]++;
            }
        }

        return hasDuplicate;
        
    }
};