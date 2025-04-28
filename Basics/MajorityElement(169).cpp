class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto it:nums)
        {
            m[it]++;
        }
        for(auto ele:m)
        {   
            if(ele.second>nums.size()/2)
            {
                return ele.first;
            }
        }
        return -1;
    }
};
