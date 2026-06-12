class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 1;
        while(i<nums.size()){
            if(nums[i]==nums[i-1]){
                return true;
            }
            i++;
        }
        return false;
    }
};