class MyStack {
public:
    queue<int>q1,q2;
    MyStack() {
        
        
    }
    
    void push(int x) {
        
        q2.push(x);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int>q=q1;
        q1=q2;
        q2=q;
        
    }
    
    int pop() {
        int a;
        if(!q1.empty())
        {
            a = q1.front();
            q1.pop();
            return a;
        }
        return -1;
    }
        
    
    
    int top() {
        if(q1.empty())
            return -1;
        else
            return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};
