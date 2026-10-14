class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        stack<char>stk;
        for(int i=0;i<n;i++){
            stk.push(s[i]);
        }
        for(int i=0;i<n;i++){
            s[i] = stk.top();
            stk.pop();
        }

    }
};