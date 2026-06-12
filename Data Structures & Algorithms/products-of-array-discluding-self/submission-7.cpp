// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         vector<int> result;
//         int product = 1;
//         int zeroCount = 0;

//         for (int x : nums) {
//             if (x == 0) {
//                 zeroCount++;
//             } else {
//                 product *= x;
//             }
//         }
//         for (int y : nums) {
//             if (zeroCount > 1) {
//                 result.push_back(0);
//             }
//             else if (zeroCount == 1) {
//                 if (y == 0)
//                     result.push_back(product);
//                 else
//                     result.push_back(0);
//             }
//             else {
//                 result.push_back(product / y);
//             }
//         }
//         return result;
//     }
// };

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);
        // Products to the left of each index
        int prefix = 1;
        for (int i = 0; i < n; i++) {
            result[i] = prefix;
            prefix *= nums[i];
        }
        // Multiply by products to the right
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            result[i] *= suffix;
            suffix *= nums[i];
        }

        return result;
    }
};