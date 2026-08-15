class Solution {
public:
void solve(int n,int k,int i,vector<int>& current, vector<vector<int>>& ans){
    if(current.size() == k){
        ans.push_back(current);
        return;
    }
    
    for(int j = i;i<=n;i++){
    current.push_back(i);
    solve(n,k,i+1,current,ans);
    current.pop_back();
}

}
    vector<vector<int>> combine(int n, int k) {
        vector<int> current; 
        vector<vector<int>> ans;
        int i =1;
       
            solve(n,k,i,current,ans);
            
        return ans;
    }
};