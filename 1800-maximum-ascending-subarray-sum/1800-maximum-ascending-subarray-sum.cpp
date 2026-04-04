class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int max_sum = nums[0];
        int current_sum = nums[0];
        for(int i =1;i<n;i++){
            if(nums[i]>nums[i-1]){
                current_sum += nums[i];
            }
            else{
                current_sum = nums[i];
            }
            max_sum = max(current_sum,max_sum);
        }
        return max_sum;
    }
};