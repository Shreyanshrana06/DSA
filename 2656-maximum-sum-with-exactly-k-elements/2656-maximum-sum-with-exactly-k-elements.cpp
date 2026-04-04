class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
      int n = nums.size();
      int sum = 0;
      while(k--){
     int maxi = *max_element(nums.begin(),nums.end()); //gives largest single element
    sum += maxi;
     for(int i =0;i<n;i++){
        if(nums[i] == maxi){
            nums[i]++;
            break;
        }
     }
      }
      return sum;
    }
};