class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        
        for(int ch : s){
            if(st.size() == 0){
                st.push(ch);
            }
            else if(st.size() >0 && abs(st.top()-ch) == 32){
                st.pop();
            }
            else{
                st.push(ch);
            }
            
        }
        string str = "";
        while(st.size() != 0){
            str.push_back(st.top());
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};