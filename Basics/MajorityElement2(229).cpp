class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int>v;
        for(auto it:nums)
            m[it]++;
        for(auto ele:m)
        {
            if(ele.second>nums.size()/3)
                v.push_back(ele.first);
        }
        return v;
    }
};
