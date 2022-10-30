class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(auto it:asteroids)
        {
            if(it>0)
                st.push(it);
            else{
                while(st.size() > 0 && st.top()>0 && st.top()<-it)
                    st.pop();
                if(st.size() > 0 && st.top()==-it)
                    st.pop();
                else if(st.size() > 0 && st.top() > -it){
                    // do nothing
                }
                else
                    st.push(it);
            }
        }
        vector<int>v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        
        reverse(v.begin(),v.end());
        
        return v;
    }
};