class Solution {
public:
    int mirrorDistance(int n) {
        long long a=n;
        long long reverse=0;
        while(a>0){
            reverse=reverse*10+a%10;
            a=a/10;
        }
        return abs(n - (int)reverse);
    }
};