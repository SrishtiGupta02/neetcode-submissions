class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length())
        {
            return false;
        }
        int freq[26]={0};

        for(int i =0;i<s.length();i++)
        {
            char x = s[i];
            char y = t[i];

            freq[x-'a']++;
            freq[y-'a']--;

        }
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0)
                return false;
        }

        return true;
    }
};
