class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        int n = nums.size();
        int sum = 0;
        double maxi = INT_MIN;
        while(right<n){
            sum += nums[right];
            if(right-left+1>k){
                sum -= nums[left];
                left++;
            }
            if(right-left+1 == k){
                double avg = double(sum)/k;
                maxi = max(maxi,avg);
            }
        right++;
        }
        return maxi;
    }
};