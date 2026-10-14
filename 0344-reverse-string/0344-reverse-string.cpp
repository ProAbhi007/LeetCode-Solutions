class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        stack<char>stk;
        for(int i=0;i<n;i++){
            stk.push(s[i]);
            s.pop_back();
        }
        while(!stk.empty()){
            s.push_back(stk.top());
            stk.pop();
        }

    }
};