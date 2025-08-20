class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for(int i = 0; i < 32; i++){
            int n = 0;
            for(int j = 0; j < nums.size(); j++){
                if(nums[j] & 1 << i){
                    n++;
                }

            }
            if(n % 3 == 0){
                continue;
            }

            else{
                ans = ans | 1 << i;
            }
        }

        return ans;
        
    }
};