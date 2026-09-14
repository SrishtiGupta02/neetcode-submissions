class Solution {
public:

    string encode(vector<string>& strs) 
    {
        string s="";
        for(int i=0;i<strs.size();i++)
        {
            s+= to_string(strs[i].length());
            s.push_back('#');
            s+=strs[i];        
        }
        return s;
    }

    vector<string> decode(string s) 
    {
        vector<string> ans;
        
        int i =0;
        while(i!=s.length())
        {
            int j=i;
            while(s[j]!='#')
            {
                j++;
            }
            int n=stoi(s.substr(i,j-i));
            string word= s.substr(j+1,n);

            ans.push_back(word);
            i=j+1+n;
            


        }
        return ans;

    }
};
