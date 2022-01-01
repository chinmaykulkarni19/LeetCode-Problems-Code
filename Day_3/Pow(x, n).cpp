class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
            return 1;
        if(n==1)
            return x;
        double y=myPow(x,abs(n/2));
        y=y*y;
        if(n%2!=0)
            y*=x;
        if(n<0)
            return (1/y);
        else
            return y;
    }
};