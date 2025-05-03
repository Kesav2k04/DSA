class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int>MAP;

        for(int i=0;i<nums.size();i++)
        {
            int moreNeeded=target-nums[i];
            if(MAP.find(moreNeeded)!=MAP.end())
            {
                int r=i;
                int l=MAP[moreNeeded];
                return {l,r};
            }
            MAP[nums[i]]=i;
        }
        return {-1,-1};
    }
};
