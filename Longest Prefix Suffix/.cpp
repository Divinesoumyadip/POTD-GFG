
// User function template for C++

class Solution {
  public:
    int lps(string s) {
        // Your code goes here
        vector<int>lps(s.size(),0);
        int pre=0,suffix=1;
        while(suffix<s.size()){
            if(s[pre]==s[suffix]){
                lps[suffix]=pre+1;
                suffix++,pre++;
            }
            else{
                if(pre==0){
                    lps[suffix]=0;
                    suffix++;
                }
                else{
                    pre=lps[pre-1];
                     
                }
            }
        }return lps[s.size()-1];
    }
};
