class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int, int> mp; 
        vector <int> res;
        for(int i = 0; i < nums.size(); ++i){
            auto iter = mp.find(target - nums[i]); 
            if(iter != mp.end()){
                res.push_back(i); 
                res.push_back(iter->second); 
                return res; 
            }
            mp[nums[i]] = i;
        }
    return res; 
    }
};

// Run time: 7ms
// Memory: 11,2MB 