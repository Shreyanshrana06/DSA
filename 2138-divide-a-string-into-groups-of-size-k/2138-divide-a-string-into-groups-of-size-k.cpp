class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
       vector<string> answer;
        for (int i = 0;i<s.size();i +=k){
            string part = s.substr(i,k);
            while(part.size()< k){
                part +=fill;
            }
            
            answer.push_back(part);
        }
       return answer;
        
    }
};