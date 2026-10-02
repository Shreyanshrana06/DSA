class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        int twenty = 0;
        for(int i=0;i<bills.size();i++){
            if(bills[i] == 5){
                five++;

            }
            if(bills[i] == 10){
                if(five>0){
                ten++;
                five--;
                }
                else{
                    
                    return false;
                }
            }
            if(bills[i] == 20){
                if(ten>0 && five >0){ 
                twenty++;
                ten--;
                five -= 1; 
                }
                else{
                    if(five>2){
                        five -=3;
                    }
                    else{
                        return false;
                    }

                    
                }
            }
        }
        return true;
    }
};