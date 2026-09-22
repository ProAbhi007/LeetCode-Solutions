class Solution {
public:
    char repeatedCharacter(string s) {
        int r=0;
        while(r<s.length()){
            int cout=0;
            for(int i=0;i<=r;i++){
                if(s[r]==s[i]) cout++;
                if(cout==2) return s[r];
            }r++;
        }
        return 0;
    }
};