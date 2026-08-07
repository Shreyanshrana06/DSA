class Solution {
public:
    int next_number(int n){
        int sum = 0;
        while(n){
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
    return sum;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = next_number(n);
        while(slow != fast){
            slow = next_number(slow);
            fast = next_number(next_number(fast));
        }
    return slow ==1;
    }
};