class Solution {
public:
    double Power(double x, int n){
        if(n == 0)
        return 1;
        double half = Power(x, n/2);
        if(n%2 == 0)
        return half*half;
        return x*half*half;
    }
    double myPow(double x, int n) {
        if(n < 0){
            x = 1/x;
            n = -n;
        }
        return Power(x, n); 
    }
};
