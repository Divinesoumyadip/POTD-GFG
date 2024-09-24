
// User function template for C++

class Solution {
  public:
    int lps(string str) {
        // toh ye toh shayad kmp se ho jaayega
        int i=1,j=0;
        vector<int> v(str.size(),-1);
        while(i<str.size()){
            if(str[i]==str[j]){
                v[i] = j;
                j++;
            }
            else{
                while(j!=0){
                    j = v[j-1];
                    j++;
                    if(str[j]==str[i]){
                        v[i]=j;
                        j++;
                        break;
                    }
                }
            }
            i++;
        }
        // for(int i=0;i<str.size();i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        return v[str.size()-1]+1;
    }
};
