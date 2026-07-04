class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> charmap_count;
        int length = 0;
        int max_freq = 0;
        int left=0;

        for(int right=0; right<s.length(); right++){
            charmap_count[s[right]]++;
            
            max_freq = max(max_freq, charmap_count[s[right]]);

            while((right-left+1) - max_freq > k){
                charmap_count[s[left]]--;
                left++;
            }
            length = max(length, right-left+1);
        }
        return length;
    }
};
