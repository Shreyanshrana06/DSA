class Solution {
public:
void solve(int n, int open, int close,vector<string>& v,string op){
    if(open ==0 && close == 0){
        v.push_back(op);
        return;
    }
    if(open != 0){
        string op1 = op;
        op1.push_back('(');
        solve(n-1,open-1,close,v,op1);
    }
    if(open<close){
        string op2 = op;
        op2.push_back(')');
        solve(n-1,open,close-1,v,op2);
    }
    return; 

}
    vector<string> generateParenthesis(int n) {
        int open = n;
        int close = n;
        string op = "";
        vector<string> v;
        solve(n,open,close,v,op);
        return v;
    }
};