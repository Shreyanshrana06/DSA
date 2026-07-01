class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        int n = arr.size();
        int left = 0;
        int right = n-1;
        
     
            while(right-left+1 > k){
                if(abs(x-arr[left]) <= abs(arr[right]-x)){
                    right--;
                }
                else{
                    left++;
                }

            }
            for(int i=left;i<=right;i++){
                ans.push_back(arr[i]);
            }
            
        return ans;
    }
};