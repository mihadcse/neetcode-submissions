class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int count = 0;
        for(int t : st){
            if(!st.count(t-1)){
                int curr = t;
                int len = 1;

                while(st.count(curr+1)){
                    curr++;
                    len++;
                }

                count = max(len, count);
            }
        }
        return count;
    }
};
