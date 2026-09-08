class Solution {
public:
    int countCommas(int n) {
        
               int count = n-998-1;
            if(n<1000){
                count = 0;
            }
        
                return count;
    }
};