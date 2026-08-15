class Solution {
public:

    bool isPalindrome(string& s,int left,int right){
        
        while(left<right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
           
        }
         return true;
    }
void solve(string s,int index, vector<string>& current,vector<vector<string>>& ans){
    if(index == s.length()){
        ans.push_back(current);
        return;
    }
    for(int i = index;i<s.length();i++){
    if(isPalindrome(s,index,i)){
        string temp = s.substr(index,i-index+1);
        current.push_back(temp);
        solve(s,i+1,current,ans);
        current.pop_back();
    }
    
    }
}
    vector<vector<string>> partition(string s) {
        int index = 0;
        int left = 0;
        int right = s.length()-1;
        vector<string> current;
        vector<vector<string>> ans;
        solve(s,0,current,ans);

        return ans;
    }
};