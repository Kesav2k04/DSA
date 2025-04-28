#include<bits/stdc++.h>
using namespace std;
bool comp(string& a, string& b)
{
    return a.length()<b.length();
    
    return a[a.length()-1]<b[b.length()-1];
    
}
bool comp(pair<string,int>& a, pair<string,int>& b)
{
    return a.first<bfirst;
    
    return a.second<b.second;
}
int main()
{
    vector<string>arr={"mahu","kes","rishi","Lokesh"};
    
    vector<int>arr={1,;
    
    
    pair<string,int>a;
    
    vector<pair<string,int>>vec;
    
    vec.push_back({"Kesav",29});
    vec.push_back({"Mahu",12});
    vec.push_back({"Lokesh",100});
    
    cout<<vec[0].first;
    
    sort(vec.begin(),vec.end(),comp);
    
    for(auto it : vec)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
      
}
