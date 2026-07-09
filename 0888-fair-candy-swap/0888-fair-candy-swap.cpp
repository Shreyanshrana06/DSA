class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sum1 = 0;
        int sum2 = 0;
        for(int i=0;i<aliceSizes.size();i++){
            sum1 +=aliceSizes[i];
        }
        for(int j=0;j<bobSizes.size();j++){
            sum2 +=bobSizes[j];
        }
        for(int i=0;i<aliceSizes.size();i++){
            for(int j=0;j<bobSizes.size();j++){

        if(sum1-aliceSizes[i]+bobSizes[j] == sum2-bobSizes[j]+aliceSizes[i]){
            return{aliceSizes[i],bobSizes[j]};
        }}}
        return {-1,-1};
    }
};