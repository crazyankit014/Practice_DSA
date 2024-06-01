class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        // int count=0;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     if(nums[i]==nums[j])
        //     {
        //         return true;
        //     }
        // }
        // return false;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }

        for(auto it: mpp)
        {
            if(it.second >=2)
            {
                return true;
            }
        }
        return false;
    }
};