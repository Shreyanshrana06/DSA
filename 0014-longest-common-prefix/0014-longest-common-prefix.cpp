class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for(int i =0;i<strs[0].size();i++){
            char index = strs[0][i];
        for(int j=1;j<strs.size();j++){
            if(i>=strs[j].size() || strs[j][i] != index)
            return ans;
        }
        ans = ans+index;
        }
        return ans;
    }
};