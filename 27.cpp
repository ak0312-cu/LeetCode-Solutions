class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        vector<int> indices;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val){
                k++;
                indices.push_back(nums[i]);
            }
        }
        for(int i = 0; i < k; i++){
            nums[i] = indices[i];
        }
        
        return k;

        
        
    }
};