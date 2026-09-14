class Solution {
public:
    int trap(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        int output=0; 
        int lm=0;
        int rm=0; 

        while(i<j)
        {
            if(nums[i]<nums[j])
            {
                if(nums[i]<lm)
                {
                    output+=lm-nums[i];
                }
                else
                {
                    lm=nums[i];
                }
                i++;
            }
            else
            {
                if(nums[j]<rm)
                {
                    output+=rm-nums[j];
                }
                else
                {
                    rm=nums[j];
                }
                j--;
            }
        } 
        return output;
    }
};