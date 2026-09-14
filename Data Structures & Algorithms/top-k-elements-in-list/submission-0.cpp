class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mpp;

        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]+=1;
        }

        vector<pair<int,int>> count;

        for(auto & it:mpp)
        {
            count.push_back({it.second,it.first});

        }
       
       sort(count.rbegin(),count.rend());

        vector<int> ans;
        for(int i=0;i<k;i++)
        {
        ans.push_back(count[i].second);
        }
        return ans;

    }
};
