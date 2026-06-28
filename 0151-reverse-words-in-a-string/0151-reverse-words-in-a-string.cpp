class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string ans = "";
        int left = 0;
        int right = 0;
       int n = s.length();
    while(right<n){
    while(right<n && s[right] == ' '){
        
        right++;}
        left = right;
    
    while(right<n && s[right] != ' '){
        right++;
    }
    if(left<right){
    words.push_back(s.substr(left,right-left));
   }
    } 
   for(int i =words.size()-1;i>=0;i--){
        ans += words[i];
    if(i!=0){
        ans +=" ";
    }
    }
    return ans;
    }
};
