class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length = nums.size();
        unordered_map<int, int> imap;
        for(int i=0;i<length;i++){
            auto it = imap.find(target - nums[i]);
            
            if(it != imap.end()){
                vector<int> result {it->second, i};
                return result;
            }
            imap[nums[i]] = i;
        }
        vector<int> result(2,0);
        return result;
    }
};
