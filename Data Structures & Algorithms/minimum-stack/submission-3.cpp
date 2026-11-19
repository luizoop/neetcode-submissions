class MinStack {
private: 
    stack<int> norm_stack;
    stack<int> min_stack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        norm_stack.push(val);
        if (min_stack.empty()){
            min_stack.push(val);
            return;
        }
        if(val > min_stack.top()){
            min_stack.push(min_stack.top());
        } else{
            min_stack.push(val);
        }
        
    }
    
    void pop() {
        norm_stack.pop();
        min_stack.pop();
    }
    
    int top() {
        return norm_stack.top();
    }
    
    int getMin() {
        return min_stack.top();
    }
};
