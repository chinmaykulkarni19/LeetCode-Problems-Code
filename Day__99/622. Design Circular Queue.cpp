class MyCircularQueue {
public:
    queue<int>q;
    int size=0;
    int cap;
    MyCircularQueue(int k) {
        cap=k;
    }
    
    bool enQueue(int value) {
        if(size>=cap)
            return false;
        size++;
        q.push(value);
        return true;
    }
    
    bool deQueue() {
        if(q.empty())
            return false;
        size--;
        q.pop();
        return true;
    }
    
    int Front() {
        if(q.empty())
        {
            return -1;
        }
        else
            return q.front();
    }
    
    int Rear() {
        if(q.empty())
            return -1;
        else
            return q.back();
    }
    
    bool isEmpty() {
        if(q.empty())
        {
            return true;
        }
        else
            return false;
    }
    
    bool isFull() {
        if(size==cap)
            return true;
        else
            return false;
    }
};