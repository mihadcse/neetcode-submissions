class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // unordered_map<int,int> freq;

        // for(int n : nums){
        //     freq[n]++;
        // }

        // vector<pair<int,int>> arr;

        // for(auto p : freq){
        //     arr.push_back({p.second, p.first});
        // }

        // sort(arr.rbegin(), arr.rend());

        // vector<int> result;

        // for(int i = 0; i < k; i++){
        //     result.push_back(arr[i].second);
        // }

        // return result;

        map<int,int>freq;

        for(int n:nums){
            freq[n]++;
        }
        vector<int>result;

        vector<pair<int,int>>vec;
        for(auto const& [val, count] : freq) {
            vec.push_back({count, val});
        }

        sort(vec.begin(), vec.end(), greater<>());
        
        for(const auto& pair: vec){
            if(k>0){
            result.push_back(pair.second);
            }
            k--;
        }
        return result;
    }
};