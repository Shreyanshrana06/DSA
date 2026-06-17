class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int first = 0;
        int second = 0;
        while(first<n1 && second<n2){
            int x = nums1[first];
            int y = nums2[second];
            if(x==y){
                return x;

            }
            else if(x<y){
                first++;
            }
            else{
                second++;
            }
        }
return -1;
    }
};