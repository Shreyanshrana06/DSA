class Solution {
    private:
    bool isPalindrome(string &s,int left,int right){
       while(left<right){
        if(s[left] != s[right]){
            
        return false;
        }
        left++;
            right--;
        
       }
       return true;
    }
    
public:
    bool validPalindrome(string s) {
       int start = 0;
       int end = s.length()-1;
       int diff = 0;
       while(start<end){
        if(s[start] != s[end]){
            return isPalindrome(s,start+1,end) || isPalindrome(s,start,end-1);
        }
        else{
            start++;
            end--;
        }
       } 
       return true;
    }
};