class Solution {
public:
    void solve(vector<int>& nums, int index,
               vector<int>& current,
               vector<vector<int>>& ans) {

        // Every current state is a valid subset
        ans.push_back(current);

        for (int i = index; i < nums.size(); i++) {
            current.push_back(nums[i]);        
            solve(nums, i + 1, current, ans);
            current.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> current;

        solve(nums, 0, current, ans);

        return ans;
    }
};