class Solution {
public:
    string minWindow(string s, string t) {
        if(s.empty()||t.empty()||s.length()<t.length())
        return "";
        unordered_map<char,int>need,window;
        for(char x:t)need[x]++;
        int l=0,r=0,minlen=INT_MAX,minst=0,formed=0;
        int req=need.size();
        while(r<s.length()){
            window[s[r]]++;
            if(need.count(s[r]) && window[s[r]]==need[s[r]]) formed++;
            while(l<=r && formed==req){
                if(r-l+1 < minlen){
                    minlen=r-l+1;
                    minst=l;
                }
                window[s[l]]--;
                if(need.count(s[l]) && window[s[l]]<need[s[l]]) formed--;
                l++;
            }
            r++;
           
        }
     return minlen==INT_MAX ? "" : s.substr(minst,minlen);
    }
};