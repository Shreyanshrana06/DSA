class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a =  0;
        int b = 0;
        for(int& n : nums){
            int oa = a;
            a = max(a,n);
            b = max(b,min(oa,n));
        }
        return (a-1)*(b-1);
    }
};