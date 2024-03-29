class MyQueue {
public:
    stack<int>input;
    stack<int>output;
    MyQueue() {
        
    }
    
    void push(int x) {
    /** Push element x to the back of queue. */
        input.push(x);        
    }
    
/** Removes the element from in front of queue and returns that element. */
    int pop() {
        /** if the output stack is empty we will shift all the elements from input stack and then we will return the top element and then pop it. */
        if(output.empty()){
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }

        int x = output.top();
        output.pop();
        return x;        
    }
    
    /** Get the front element. */
    int peek() {
        /** same pop logic */
        if(output.empty()){
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }

        return output.top();
    }
    
    bool empty() {
        /** just check the size of both the stack if there are no element left in both stack then the queue is empty(you can use same logic to implement function for getting the size of the queue by just returning total size of both the stack) */ 
        return (input.size() + output.size() == 0);
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