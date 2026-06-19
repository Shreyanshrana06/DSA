class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int ans = 0;
       int maxi = 0;
       
       int n = gain.size();
       for(int i=0;i<n;i++){
        ans = ans + gain[i];
       maxi = max(maxi,ans);
       }

return maxi;
        
    }
};