class Solution {
public:
    long long fpow(long long a, long long b) {
        long long r = 1;
        for (; b; b >>= 1, a *= a)
            if (b & 1) r *= a;
        return r;
    }

    void findSubset(vector<int>& nums, vector<vector<int>>& res){
        int n = fpow(2,nums.size());

        for(int i = 0; i < n; i++){
            vector<int> subset;
            for(int j = 0; j < nums.size(); j++){
                if(i & 1 << j){
                    subset.push_back(nums[j]);
                }
            }
            res.push_back(subset);
        }

    }

    // void helper (int i, int n, vector<int>& nums){
    //     if(i >= n){
    //         res.push_back(cur);
    //         return;
    //     }

    //     cur.push_back(nums[i]);
    //     helper(i+1, n, nums);
    //     cur.pop_back();
    //     helper(i+1, n, nums);

    // }
    
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>> res;

       findSubset(nums, res);
       return res;
    }
};