class MinStack {
public:
    stack<int> s1;
    stack<int> s2;
    MinStack() {
        
    }
    
    void push(int value) {
        s1.push(value);
        if(s2.size() == 0 || s2.top()>=value){
            s2.push(value);
        }
        return;
    };
    
    void pop() {
        if(s1.size() == 0){
            return;
        }
        int ans = s1.top();
        s1.pop();
        if(s2.top() == ans){
            s2.pop();
        }
        
    };
    
    int top() {
        if(s1.size() == 0 || s2.size() == 0){
            return -1;
        }
        return s1.top();
    };
    
    int getMin() {
        if(s2.size() == 0){
            return -1;
        }
        return s2.top();
    };
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */