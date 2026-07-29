class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        stack<int> s;
        for(int i=2*n-1;i>=0;i--){
            if(s.size() == 0){
                if(i<n)
                ans[i%n] = (-1);
            }
            else if(s.size()>0 && s.top()>nums[i%n]){
                if(i<n)
                ans[i%n] = (s.top());
            }
            else if(s.size()>0 && s.top()<=nums[i%n]){
                while(s.size()>0 && s.top()<=nums[i%n]){
                    s.pop();
                }
                if(s.size() == 0){
                    if(i<n)
                    ans[i%n] = (-1);
                }
                else{
                    if(i<n)
                    ans[i%n] = (s.top());
                }
            }
            s.push(nums[i%n]);
        }
        
        return ans;

    }
};