class Solution {
public:
    bool isAnagram(string s, string t) {
        int count = 0;
        map<char,int> map_count_1;
        map<char,int> map_count_2;
        if(s.length() != t.length()){
            return false;
        }
        for(char c : s){
            map_count_1[c]++;
        }
        for(char c : t){
            map_count_2[c]++;
        }
        if(map_count_1 == map_count_2){
            return true;
        }
        return false;
    }
};
