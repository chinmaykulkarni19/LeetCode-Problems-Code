class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int res=k;
        int n=blocks.size();
        for(int i=0;i<n-k+1;i++)
        {
            int window_size=0;
            for(int j=i;j<i+k;j++)
            {
                if(blocks[j]=='W')
                {
                    window_size++;
                }
            }
            res=min(res,window_size);
        }
        
        return res;
    }
    
};