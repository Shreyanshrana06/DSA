class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max_sum = INT_MIN;
        int sum = 0;
        int start = 0;
        int left = 0;
        int end = 0;
        for(int right=0;right<n;right++){
            sum += nums[right];
            if(sum>max_sum){
                max_sum = sum;
                start = left;
                end = right;
                
            }
            if(sum<0){
                sum = 0;
                left = right+1;
            }
        }
        return max_sum;
         
    }
};