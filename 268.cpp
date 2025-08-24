class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != i) return i;
        }
        return nums.size();
    }
};



class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> freq(nums.size()+1, 0);

        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]] = 1;
        }

        for(int i = 0; i < freq.size(); i++){
            if(freq[i] != 1) return i;
        }

        return nums.size();
    }
};