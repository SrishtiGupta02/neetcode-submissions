class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> output;
        int n=nums.size();
        int k=0;
        sort(nums.begin(),nums.end());

        while(k<n-2)
        {
            if(k>0 && nums[k]==nums[k-1] && k+1<n-1)
            {
                k++;
                continue;
            }
            int target=-(nums[k]);

        int i=k+1;
        int j=n-1;

        while(i<j)
        {
            int sum=nums[i]+nums[j];
            if(target==sum)
            {
                output.push_back( {nums[k],nums[i],nums[j]});

                while(i < j && nums[i] == nums[i + 1])
                        i++;
                while(i < j && nums[j] == nums[j - 1])
                        j--;

                        
                  i++;
                  j--;

            }

            else{
                if(sum>target)
                {
                    j--;
                }
                else
                {
                    i++;
                }
            }
      
        }
        k++;
        
        }

        return output;
    }
};
