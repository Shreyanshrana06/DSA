class Solution {
public:

    int atmost(vector<int>& nums,int k){
        int odd_count =0;
        int left=0;
        int right =0;
        int answer=0;
    while(right<nums.size()){
        if(nums[right]%2 != 0){
            
                odd_count++;
            }
            while(odd_count>k){
             if(nums[left]%2 != 0){
            
                odd_count--;
                
            }   
            left++;
            }
            answer +=right-left+1;
        right++;
    }
    return answer;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        
            if(k<0){
                return 0;
            }
            
        return atmost(nums,k)-atmost(nums,k-1);
    }
};