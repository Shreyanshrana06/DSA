class Solution {
public:
void solve(vector<int>& candidates, int target,vector<int>& current,vector<vector<int>>& ans,int i,int sum){
    sort(candidates.begin(),candidates.end());
    
    if(sum == target){
        ans.push_back(current);
        return;

    }
    if(sum>target){
        return;
    }
    for(int j = i;j<candidates.size();j++){
        if(j>i && candidates[j] == candidates[j-1]){
            continue;
        }
        current.push_back(candidates[j]);
        solve(candidates,target,current,ans,j+1,sum+candidates[j]);
        current.pop_back();
   
    }

}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> current;
        vector<vector<int>> ans;
        solve(candidates,target,current,ans,0,0);
        return ans;
    }

    
};