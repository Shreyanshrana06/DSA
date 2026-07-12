class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int> sorted;
        vector<int> temp;
        vector<int> ans;
        int rank=1;
        
        for(int i=0;i<arr.size();i++){
            
            temp.push_back(arr[i]);
        }
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++){
            if(sorted.find(temp[i]) == sorted.end()){
                sorted[temp[i]] = rank++;
            }
        }
        for(int i=0;i<arr.size();i++){
            ans.push_back(sorted[arr[i]]);
        }
    return ans;
    }
};