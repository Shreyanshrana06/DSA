class Solution {
public:
void solve(vector<int>& candidates, int target,vector<int>& current,vector<vector<int>>& ans,int i,int sum){
    if(sum == target){
        ans.push_back(current);
        return;

    }
    if(sum>target){
        return;
    }
    for(int j = i;j<candidates.size();j++){
    
        current.push_back(candidates[j]);
        solve(candidates,target,current,ans,j,sum+candidates[j]);
        current.pop_back();
   
    }

}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> current;
        vector<vector<int>> ans;
        solve(candidates,target,current,ans,0,0);
        return ans;
    }
};