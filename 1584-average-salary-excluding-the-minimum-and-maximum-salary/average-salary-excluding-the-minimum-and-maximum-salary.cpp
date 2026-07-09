class Solution {
public:
    double average(vector<int>& salary) {
        int max=*max_element(salary.begin(), salary.end());
        int min=*min_element(salary.begin(), salary.end());
        int sum=0;
    for(int i=0;i<salary.size();i++){
        sum+=salary[i];
    }
    return (double)(sum - max - min) / (salary.size() - 2);
    }
};