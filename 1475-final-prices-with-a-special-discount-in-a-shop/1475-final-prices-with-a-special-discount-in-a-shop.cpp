class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
     vector<int> ans;
     stack<int> st;
     for(int i=prices.size()-1; i>=0 ; i--){
       while(st.size()>0 && st.top()>prices[i]){
              st.pop();  
            }
        
         if(st.size()>0 && st.top()<= prices[i]){
            int final = prices[i] - st.top();
            ans.push_back(final);
        }
        else{
            ans.push_back(prices[i]);
        }
       
        st.push(prices[i]);
     } 
      reverse(ans.begin(),ans.end());  
     return ans;
    }
};