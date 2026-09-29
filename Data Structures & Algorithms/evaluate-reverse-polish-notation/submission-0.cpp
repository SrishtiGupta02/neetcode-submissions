class Solution {
public:
    int evalRPN(vector<string>& token) {
        stack<int> st;

        for(int i=0;i<token.size();i++)
        {
            if(token[i]=="+")
            {
                int a=st.top();st.pop();
                int b=st.top();st.pop();
                st.push(b+a);
            }
            else if(token[i]=="-")
            {
                int a=st.top();st.pop();
                int b=st.top();st.pop();
                st.push(b-a);
            }
            else if(token[i]=="*")
            {
                int a=st.top();st.pop();
                int b=st.top();st.pop();
                st.push(b*a);
            }
            else if(token[i]=="/")
            {
                int a=st.top();st.pop();
                int b=st.top();st.pop();
                st.push(b/a);
            }
            
            else
            {
                int c=stoi(token[i]);
                st.push(c);
            }
        }
        return st.top();
    }
};