class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>m;
        int duplicate=-1,missing=-1;
        for(auto it:nums)
            m[it]++;
        for(int i=1;i<=nums.size();i++)
        {
            if(m[i]==2)
                duplicate=i;
            else if(m[i]==0)
                missing=i;
        }
        return {duplicate,missing};
    }
};
