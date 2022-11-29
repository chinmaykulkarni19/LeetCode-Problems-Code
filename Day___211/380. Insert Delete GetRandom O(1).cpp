RandomizedSet() {
        
    }
    set<int>s;
    bool insert(int val) {
        if(!s.count(val))
        {
            s.insert(val);
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(s.count(val))
        {
            s.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        if(s.size()!=0)
        {
            return *next(s.begin(),rand()%s.size());
        }
        return 0;
    }