class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {

       unordered_set <int> s(nums.begin(),nums.end());
       int longest=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i]-1)==s.end())
            {
                int length=1;
                while(s.find(nums[i]+length)!=s.end())
                {
                    length++;
                }
                longest=max(length,longest);
            }
           

        }
        return longest;
    }
};
