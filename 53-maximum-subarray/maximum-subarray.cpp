class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int n=nums.size();
        // int maxi= INT_MIN;
        // int sum=0;
        // for(int i=0;i<n;i++)
        // {
        //      sum=sum+ nums[i];
        //      if(sum > maxi)
        //      {
        //         maxi=sum;
        //      }
        //      if(sum <0)
        //      {
        //         sum=0;
        //      }
        // }
        // return maxi;

        int n=nums.size();
        int maxi=INT_MIN;
       int sum=0;
    int start = 0;
    int ansStart = -1, ansEnd = -1;
    for (int i = 0; i < n; i++) {

        if (sum == 0) start = i; // starting index

        sum += nums[i];

        if (sum > maxi) {
            maxi = sum;

            ansStart = start;
            ansEnd = i;
        }

        // If sum < 0: discard the sum calculated
        if (sum < 0) {
            sum = 0;
        }
    }

    //printing the subarray:
    cout << "The subarray is: [";
    for (int i = ansStart; i <= ansEnd; i++) {
        cout << nums[i] << " ";
    }
    cout << "]";

    return maxi;
    }
};