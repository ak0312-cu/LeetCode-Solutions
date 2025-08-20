class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        k = k % n;
        
        int start = n - k;
        vector<int> temp(nums.begin() + start, nums.end());

        for(int i = start-1; i >= 0; i--){
            nums[i+k] = nums[i];
        } 

        for(int i = 0; i < k; i++){
            nums[i] = temp[i];
        }
        
    }
};