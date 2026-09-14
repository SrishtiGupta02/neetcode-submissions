class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        unordered_map <char,char> map
        {
            {')','('},
            {']','['},
            {'}','{'}
        };

        for(char c:s)
        {
            if(map.count(c))
            {
                if(!st.empty() && st.top()==map[c])
                {
                    st.pop();
                }
                else{return false;}
            }
            else{
                st.push(c);
            }
        }
        return st.empty();
    }
};
