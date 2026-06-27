class Solution {
public:
    int maxArea(vector<int>& heights) {
        int result=0;

        int right = heights.size()-1;
        int left = 0;
        
        while(left<right){
            int width = right-left;
            int height = min(heights[right], heights[left]);

            result = max(result, width*height);
            if(heights[left]<heights[right]){
                left++;
            }else{
                right--;
            }
        }
        return result;
    }
};
