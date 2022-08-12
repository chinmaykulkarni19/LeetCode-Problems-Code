class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        long long n=tasks.size();
        long long day=0;
        map<long long,long long>res;
        for(int i=0;i<n;i++)
        {
            if(res.find(tasks[i])==res.end())
            {
                day++;
                res[tasks[i]]=day;
                continue;
            }
            long long last_done_day=res[tasks[i]];
            day=max(day+1,last_done_day+space+1);
            res[tasks[i]]=day;
        }
        return day;
    }
};