class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        int result=0;
        for(int i=0;i<=n-1;i++) 
        {
            result+=min(3-(nums[i]%3),nums[i]%3);
        }    
        return result;
    }
};