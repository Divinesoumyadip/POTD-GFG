
class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
        string res = "";
        int j = 1;
        string s;
        str += ".";
        for(int i = 0;i<str.size();i++){
            if(str[i] != '.'){
                s += str[i];
            }else if(str[i] == '.' || i == str.size()-1){
                res = "." + s + res ;
                s = "";
            }
        }
        string ans = res.substr(1);
        return ans;
    }
};
