class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto it:nums)
            m[it]++;
        int c;
        for(auto ele:m)
        {
            if(ele.second==1)
                c=ele.first;
        }
        return c;
    }
};
