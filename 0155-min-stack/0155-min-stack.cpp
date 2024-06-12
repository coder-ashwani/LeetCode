class MinStack {
public:
    vector<pair<int,int>> st;
    //S.C - -O(2n)
    
    MinStack() {
    
    }
    
    void push(int val) {
        // minStack.push(val);
        if(st.empty()){
            // pair<int,int> p;
            st.push_back({val,val});
        }
        else{
            st.push_back({val,min(val,st.back().second)});
          }
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        
        return st.back().first;
    }
    
    int getMin() {
       return st.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */