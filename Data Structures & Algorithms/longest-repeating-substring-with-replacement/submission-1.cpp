class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> map_count;
        int length=0, l=0, max_freq=0;

        for(int r=0; r<s.length(); r++){
            map_count[s[r]]++;

            max_freq = max(max_freq, map_count[s[r]]);

            while((r-l+1) - max_freq > k){
                map_count[s[l]]--;
                l++;
            }

            length = max(length, r-l+1);
        }
        return length;
    }
};
