class MyQueue {
public:
    stack<int> input;
    stack<int> output; 
    // this solution has amortized time complexity
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if(output.empty() == false){
           int result= output.top();
           output.pop();
           return  result;
        }   
        else{
            while(input.empty() == false){
                output.push(input.top());
                input.pop();
            }
            int temp = output.top();
            output.pop();
            return temp;
        }
    }
    
    int peek() {
        if(!output.empty()){
            return output.top();
        }   
        else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            return output.top();
        }
    }
    
    bool empty() {
        // if(!input.empty()){
        //     while(!input.empty()){
        //         output.push(input.top());
        //         input.pop();
        //     }
        // }
        // return output.empty();
        return !(input.size() | output.size());
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */