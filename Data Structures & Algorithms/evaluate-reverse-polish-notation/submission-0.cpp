class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st_num;
        int x = 1;
        int y = 1;
        int p = 0;

        for (auto str : tokens) {
            if (str == "+" || str == "-" || str == "*" || str == "/") {
                x = st_num.top();
                st_num.pop();
                y = st_num.top();
                st_num.pop();

                if(str == "+"){
                    p = y + x;
                    st_num.push(p);
                }
                if(str == "-"){
                    p = y - x;
                    st_num.push(p);
                }
                if(str == "*"){
                    p = y * x;
                    st_num.push(p);
                }
                if(str == "/"){
                    p = y / x;
                    st_num.push(p);
                }
                    
            } else {
                st_num.push(stoi(str));
            }
        }
        return st_num.top();
    }
};
