class Solution {
public:
    bool isPalindrome(string s) {
        string copy;

        for(char c : s) {
            if(isalnum(c)) {
                copy += tolower(c);
            }
        }
        string sec_copy = copy; 

        reverse(copy.begin(), copy.end());

        return copy == sec_copy;
    }
};
