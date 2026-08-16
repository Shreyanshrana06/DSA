class Solution {
public:
void solve(int n,int k,vector<int>& person,int index,int& ans){
    if(person.size() == 1){
        ans = person[0];
        return;
    }
    index = (index+k)%person.size();
    person.erase(person.begin()+index);
    solve(n,k,person,index,ans);
}
    int findTheWinner(int n, int k) {
       vector<int> person;
       
       
       for(int i = 1;i<=n;i++){
        person.push_back(i);
       
       }
       k = k-1;
       int index = 0;
       int ans = -1;
       solve(n,k,person,index,ans);
       return ans;
    }
};