class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>m;
        int c;
        for(auto it:nums)
            m[it]++;
        for(auto ele:m)
        {
            if(ele.second==1)
                c=ele.first;
        }
        return c;
    }
};
