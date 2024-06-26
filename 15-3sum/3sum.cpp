class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     int n = nums.size();
    int target = 0;
    set<vector<int>> st;
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; i++) {
        int j = i + 1;
        int k = n - 1;

        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == target) {
                st.insert({nums[i], nums[j], nums[k]});
                j++;
                k--;
            } else if (sum < target) {
                j++;
            } else {
                k--;
            }
        }
    }

    for (auto it : st) {
        ans.push_back(it);
    }
    return ans;
    }
};