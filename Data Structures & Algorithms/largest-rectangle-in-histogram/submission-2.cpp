class Solution {
   public:
    int largestRectangleArea(vector<int>& heights) {
        int result = 0;
        stack<int>st;
        int n = heights.size();

        for(int i=0; i<=n;i++){
            int curr_h = (i==n) ? -1:heights[i];
            while(!st.empty() && curr_h < heights[st.top()]){
                int h = heights[st.top()];
                st.pop();
                int left = st.empty() ? -1: st.top();
                int w = i-left-1;

                result = max(result, h*w);
            }
            st.push(i);
        }
        return result;
    }
};
