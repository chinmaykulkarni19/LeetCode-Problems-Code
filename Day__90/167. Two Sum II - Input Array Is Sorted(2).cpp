class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0;
        int h=numbers.size()-1;
        while(l<h)
        {
            int temp=numbers[l]+numbers[h];
            if(target==temp)
                return {l+1,h+1};
            else if(temp>target)
                h--;
            else
                l++;
        }
        return {};
    }
};