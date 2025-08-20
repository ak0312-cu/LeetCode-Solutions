class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }

        int max = INT_MIN;
        int key = -1;

        for(auto it : mp){
            if(it.second > max){
                max = it.second;
                key = it.first;
            }
        }

        return key;
        
    }
};