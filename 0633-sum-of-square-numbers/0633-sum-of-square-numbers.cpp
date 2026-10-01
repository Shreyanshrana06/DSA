class Solution {
public:
    bool judgeSquareSum(int c) {
        int i=0;
            int j = (long)sqrt(c);
        while(i<=j){
            
            long sum = (long)i*i+(long)j*j;
            if(sum == c) return true;
            else if(sum<c){
                i++;
            }
            else if(sum>c){
                j--;
            }
        }
        return false;
    }
};