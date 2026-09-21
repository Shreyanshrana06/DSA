class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int i=0;i<s.length();i++){
            char ch = s[i];
            int index = 'z'-ch+1;
            int prod = (i+1)*(index);
            sum += prod;
        }
        return sum;
    }
};