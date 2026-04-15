class Solution {
public:
    int maxArea(vector<int>& height) {
        int mxarea = 0;
        int left = 0;
        int right = height.size()-1;
        while(left<right){
            mxarea = max(mxarea,min(height[left],height[right])* (right-left));
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return mxarea;
    }
};