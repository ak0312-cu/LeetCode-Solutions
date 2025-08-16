class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> pairs;
        for(int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            if(pairs.find(complement) != pairs.end()){
                res.push_back(i);
                res.push_back(pairs[complement]);
            }
            pairs[nums[i]] = i;
        }
        return res;
    }
};