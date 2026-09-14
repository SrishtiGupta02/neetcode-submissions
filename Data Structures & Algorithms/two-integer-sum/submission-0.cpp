class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;

        for(int i=0;i<nums.size();i++)
        {
            int value=target-nums[i];
            if(mpp.find(value)!=mpp.end())
            {
                return{mpp[value],i};
            }
            mpp[nums[i]]=i;
        }
            return{-1,-1};

    }
};
