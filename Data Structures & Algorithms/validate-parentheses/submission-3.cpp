class Solution {
public:
    bool isValid(string s) {
        stack<char> p;

        for(auto c: s){
            if(c == '(' || c == '{' || c== '['){
                p.push(c);
            }
            else if(c == ')' || c == ']' || c=='}'){
                if(p.empty()){
                    return false;
                }
                int top = p.top();
                if(c == ')' && top != '(' ||
                    c == '}' && top != '{' ||
                    c == ']' && top != '[' ){
                        return false;
                    }
                p.pop();
            }
        }
        return p.empty();
    }
};
