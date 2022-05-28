class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1=0;
        for(auto i:nums)
        {
            xor1=xor1^i;
        }
        int xorActual=0;
        for(int j=1;j<=nums.size();j++)
        {
            xorActual=xorActual^j;
        }
        return xor1^xorActual;
    }
};