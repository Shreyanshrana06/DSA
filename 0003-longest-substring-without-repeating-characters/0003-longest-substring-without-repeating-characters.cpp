class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int left = 0;
        int right = 0;
        int count = 0;
        int ans = 0;
        while(right<s.length()){
            mp[s[right]]++;
            if(mp[s[right]] == 2)
            count++;
            while(count>0){
                mp[s[left]]--;
        if(mp[s[left]] ==1){
            count--;
        }
                left++;
        
            
            }
        ans = max(ans,right-left+1);
        right++;
        }
        
        return ans;
    }
};