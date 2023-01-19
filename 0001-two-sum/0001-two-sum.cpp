class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> visited;
        vector<int> res;
        
        for(int i=0;i<nums.size();i++)
        {
            int diff=target-nums[i];
            if(visited.count(nums[i]))
            {
                res.push_back(visited[nums[i]]);
                res.push_back(i);
                break;
            }
            visited[diff]=i;
        }
        
        return res;
        
    }
};