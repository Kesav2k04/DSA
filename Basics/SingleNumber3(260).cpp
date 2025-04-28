class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto it:nums)
            m[it]++;
        vector<int>c;
        for(auto ele:m)
        {
            if(ele.second==1)
                c.push_back(ele.first);
        }
        return c;
    }
};
