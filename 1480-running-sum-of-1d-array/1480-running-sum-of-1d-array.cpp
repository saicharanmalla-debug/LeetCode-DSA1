class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int t=size(nums);
        std::vector<int> sum(t); 

        sum[0]=nums[0];
        for(int i=1;i<size(nums);i++){
            sum[i]=sum[i-1]+nums[i];
        }
    return sum;
        
    }
};