class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;

        int product = 1;
        int zeroCount = 0;
        // Calculate product of non-zero elements
        for (int x : nums) {
            if (x == 0) {
                zeroCount++;
            } else {
                product *= x;
            }
        }

        for (int y : nums) {
            // More than one zero
            if (zeroCount > 1) {
                result.push_back(0);
            }
            // Exactly one zero
            else if (zeroCount == 1) {
                if (y == 0)
                    result.push_back(product);
                else
                    result.push_back(0);
            }
            else {
                result.push_back(product / y);
            }
        }
        return result;
    }
};