class Solution {
public:

   static bool cmp(pair<int,string> a, pair<int,string> b){
        return a.first>b.first;
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        vector<pair<int,string>> vp;
        
        for(int i=0;i<names.size();i++){
            vp.push_back({heights[i],names[i]});
        }
        sort(vp.begin(),vp.end(),cmp);
        vector<string> st;
        for(auto x : vp){
            st.push_back(x.second);
        }
return st;
    }
};