class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        map<int,int>res;
        long long n=nums.size();
        long long good_pairs=0;
        for(int i=0;i<nums.size();i++)
        {
            int curr=i-nums[i];
            good_pairs+=res[curr];
            res[curr]++;
        }
        long long total=n*(n-1)/2;
        return total-good_pairs;
    }
};