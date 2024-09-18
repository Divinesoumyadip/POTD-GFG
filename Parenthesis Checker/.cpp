class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
           stack<char>stc;
        int n=s.size();char temp;
        for(int i=0;i<n;i++){
            if((s[i]=='(')||(s[i]=='[')||(s[i]=='{')){
                stc.push(s[i]);
            }
            else {
                
                if(stc.empty()==true)return 0;
                temp=stc.top();stc.pop();
                if(!((s[i]==')'&&temp=='(')||(s[i]==']'&&temp=='[')||(s[i]=='}'&&temp=='{')))
                 return 0;   
                
            }
        }
          if(stc.empty()==false)return 0;
        return 1;
    }

};
