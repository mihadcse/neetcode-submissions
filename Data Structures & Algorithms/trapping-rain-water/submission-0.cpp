class Solution {
public:
    int trap(vector<int>& height) {
        int result=0;
        int left_max = 0;
        int right_max = 0;

        int left = 0, right = height.size() - 1;

        while(left<right){
            if(height[left] <= height[right]){
                if(left_max > height[left]){
                    result += left_max - height[left];
                }
                else{
                    left_max = height[left];
                }
                left++;
            }
            else{
                if(right_max > height[right]){
                    result += right_max - height[right];
                }
                else{
                    right_max = height[right];
                }
                right--;
            }
        }
        return result;
    }
};
