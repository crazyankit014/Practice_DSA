class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int s=0,e=0,mid,ans;
        for(int i=0;i<n;i++)
        {
            s=max(s,nums[i]);
            e=e+nums[i];
        }

        while(s<=e)
        {
            mid=s+(e-s)/2;
            int pages=0,count=1;
            for(int i=0;i<n;i++)
            {
                pages=pages+nums[i];

                if(pages > mid)
                {
                    count++;
                    pages=nums[i];
                }
            }
               if(count<=k)
               {
                ans=mid;
                e=mid-1;
               }
               else
               {
                s=mid+1;
               }

        }
        return ans;
    }
};