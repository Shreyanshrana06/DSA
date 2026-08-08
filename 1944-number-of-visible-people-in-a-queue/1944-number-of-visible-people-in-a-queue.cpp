class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        stack<int> st;
        vector<int> ans;
        
        for(int i=heights.size()-1;i>=0;i--){
        int count = 0;
            while(st.size()>0 && st.top() < heights[i]){
                count++;
                st.pop();
            }
            if(st.size()>0){
                count++;
            }
            ans.push_back(count);
            st.push(heights[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};