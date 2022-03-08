class Solution
{
public:
    int findComplement(int num)
    {
        for (long i = 1; i <= num; i = i * 2)
        {
            num = num ^ i;
        }
        return num;
    }
};