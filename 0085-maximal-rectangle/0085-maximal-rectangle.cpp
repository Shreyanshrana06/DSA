class Solution {
public:

vector<int> nextSmallerLeft(vector<int>& heights){
            vector<int> ans_left;
            stack<pair<int,int>> s;
            int psuedo_index =-1;
            for(int i=0;i<heights.size();i++){
                if(s.size() == 0){
                    ans_left.push_back(psuedo_index);
                }
                else if(s.size() >0 && s.top().first<heights[i]){
                    ans_left.push_back(s.top().second);
                }
                else if(s.size() >0 && s.top().first>=heights[i]){
                    while(s.size() >0 && s.top().first>=heights[i]){
                        s.pop();
                    }
                    if(s.size() == 0){
                        ans_left.push_back(psuedo_index);
                    }
                    else{
                        ans_left.push_back(s.top().second);
                    }
                }
                s.push({heights[i],i});
            }
        return ans_left;
        }
        
        vector<int> nextSmallerRight(vector<int>& heights){
            vector<int> ans_right;
            stack<pair<int,int>> s;
            int psuedo_index =heights.size();
            for(int i=heights.size()-1;i>=0;i--){
                if(s.size() == 0){
                    ans_right.push_back(psuedo_index);
                }
                else if(s.size() >0 && s.top().first<heights[i]){
                    ans_right.push_back(s.top().second);
                }
                else if(s.size() >0 && s.top().first>=heights[i]){
                    while(s.size() >0 && s.top().first>=heights[i]){
                        s.pop();
                    }
                    if(s.size() == 0){
                        ans_right.push_back(psuedo_index);
                    }
                    else{
                        ans_right.push_back(s.top().second);
                    }
                }
                s.push({heights[i],i});
            }
            reverse(ans_right.begin(),ans_right.end());
        return ans_right;
        }
    int maximalareaRectangle(vector<int>& heights){
        int max_area = INT_MIN;
        
        vector<int> ans_left = nextSmallerLeft(heights);
vector<int> ans_right = nextSmallerRight(heights);
        
        int area = 0;
        for(int i=0;i<heights.size();i++){
            int width = ans_right[i]-ans_left[i]-1;
           area = heights[i]*width;
            max_area = max(max_area, area);
        }
        return max_area;
    }


    int maximalRectangle(vector<vector<char>>& matrix) {
        int rows = matrix.size();
int cols = matrix[0].size();
        vector<int> v;
        for(int j=0;j<cols;j++){
            v.push_back(matrix[0][j]-'0');
        }
        int mx = maximalareaRectangle(v);
        for(int i=1;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j] == '0'){
                    v[j] = 0;
                }
                else{
                    v[j] = v[j] + matrix[i][j]-'0';
                }
            }
            mx = max(mx,maximalareaRectangle(v));
            

        }
        return mx;

        }
    };        