class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mpp;
        mpp[0]=1;
        int presum=0, cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            presum= presum + nums[i];
            int remove = presum-k;
            cnt = cnt + mpp[remove];
            mpp[presum] += 1;

        }
        return cnt;
    }
};