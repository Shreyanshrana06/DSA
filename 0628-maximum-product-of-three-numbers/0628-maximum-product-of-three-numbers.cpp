class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int a= INT_MIN;
        int b= INT_MIN;
        int c= INT_MIN;
        int d= INT_MAX;
        int e= INT_MAX;

        for(int& n: nums){
            int oa = a;
            int ob = b;
            int od = d;
            a= max(a,n);
            b=max(b,min(oa,n));
            c=max(c,min(ob,n));
            d = min(d,n);
            e = min(e,max(od,n));
        }
        return max(a*b*c, a*d*e);
    }
};