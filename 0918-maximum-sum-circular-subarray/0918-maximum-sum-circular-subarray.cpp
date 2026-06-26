class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxi = INT_MIN;
        int n = nums.size();
        int totalsum = 0;
        int sum1 = 0;
        int sum2 = 0;
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            totalsum +=nums[i];
            sum1 +=nums[i];
            maxi = max(maxi,sum1);
            if(sum1<0){
                sum1 = 0;
            }
            sum2 +=nums[i];
            mini = min(mini,sum2);
            if(sum2>0){
                sum2 = 0;
            }
            
           
        }
        if(maxi<0){
                return maxi;
            }
        return max(maxi,totalsum-mini);
    }
};