class Solution {
public:
    bool isValid(string s) {
        
        
    int length=s.length();
        
    stack<char> st;
        
    if(length<1 || length>10000 || length%2!=0)
    {
        return false;
    }
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            st.push(s[i]);
        }else
        {
            if(st.empty())
            {
                return false;
            }
            char c=st.top();
            st.pop();
            
            if((s[i]==')' && c=='(') || (s[i]=='}' && c=='{') || (s[i]==']' && c=='['))
            {
                c=s[i];
            }else
            {
                return false;
            }
        }
    }
    
    if(st.empty())
    {
        return true;
    }
    

        return false;
    }
    
};