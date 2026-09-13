class Solution {
public:
    int minElement(vector<int>& nums) {
       
        int minVal = INT_MAX;
        for(int i=0;i<nums.size();i++){
             int sum=0;
            int n=nums[i];
            while(n>0){
                sum = sum + n % 10;
                n = n / 10;
            }
            if(sum<minVal){
            minVal=sum;
            } 
        }
   
        return minVal;
    }
};