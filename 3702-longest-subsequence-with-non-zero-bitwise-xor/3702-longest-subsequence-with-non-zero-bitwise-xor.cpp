class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x=0;
        int ans = 0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
            continue;
        }
            x ^= nums[i];
            if(x !=0){
                ans = nums.size();
            }
            else{
                if(nums[i] !=0){
                    ans = nums.size()-1;
                }
                
                else{
                    ans = 0;
                }
            }
        }
        return ans;

    }
};