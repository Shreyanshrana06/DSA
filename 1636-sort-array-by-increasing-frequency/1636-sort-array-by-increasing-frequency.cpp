class Solution {
public:
    struct Compare {
    bool operator()(pair<int,int> a, pair<int,int> b) {
        if(a.first == b.first)
            return a.second < b.second;

        return a.first > b.first;
    }
};
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>, vector<pair<int,int>>, Compare> maxh;       
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i=mp.begin();i!=mp.end();i++){
            maxh.push({i->second,i->first});
           
        }
        while(maxh.size()>0){
            int freq = maxh.top().first;
            for(int i=0;i<freq;i++){
                ans.push_back(maxh.top().second);
            }
            
            maxh.pop();

        }
        return ans;
    }
};