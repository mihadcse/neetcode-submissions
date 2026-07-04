class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        map<char, int> map1;
        map<char, int> map2;
        int left = 0;

        for (auto c : s1) {
            map1[c]++;
        }
        for (int right = 0; right < s2.length(); right++) {
            map2[s2[right]]++;
            while ((right - left + 1) > s1.length()) {
                map2[s2[left]]--;
                if (map2[s2[left]] == 0) 
                    map2.erase(s2[left]);
                left++;
            }
            if (map1 == map2) {
                return true;
            }
        }
        return false;
    }
};
