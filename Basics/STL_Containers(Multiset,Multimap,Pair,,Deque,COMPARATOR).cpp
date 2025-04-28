#include<bits/stdc++.h>
using namespace std;
bool com(pair<string,int>&a, pair<string,int>&b)
{
    return a.first.length()<b.first.length();
}
int main()
{
    
    
    Multimap dont allow [] operator
    Stores Duplicates
    multiset<int> ms = {5, 1, 3, 3};
    
    
     pair<int,pair<int,int>>
    vector<pair<int,pair<int,int>>>vec;
    
    // {100,{0,1}};
    
    vec.push_back({100,{0,1}});
    vec.push_back({101,{2,3}});
    
    100 0 1
    101 2 3 
    for(auto it : vec)
    {
        // cout<<it.first<<" ";
        cout<<it.second.second<<" ";
    }
    
    
    
    map<string,int>Map;
    
    string str="mahudemms";
    
    for(auto ch : str)
    {
        Map[ch]++;
    }
    
    
    
  for(int i=0;i<4;i++)
  {
      string str;
      cin>>str;
      int times;
      cin>>times;
       
      Map[str]+=times;
  }
    
    vector<pair<string,int>>pq(Map.begin(),Map.end());
    
    sort(pq.begin(),pq.end(),com);
    
    
    vector<int>temp(st.begin(),st.end());
    
    
    for(auto it : pq)
    {
        cout<<it.first<<
    }
    
    sort(map.begin())
    
    
    1 0
    2 1
    3 2 
    
    1 2 3 4 5 6 
    
    vector<int>arr={1,2,3,4,5,6,7};
    
    
    for(int i=0;i<arr.size();i++)
    {
        Map[arr[i]]=i;
    }
    
    for(auto it : pq)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
    
    push_front()
    push_back()
    
    pop_front()
    pop_back()
    
    front()
    back()
    
    deque<int>dq;
    
    dq.push_back(1);
    dq.push_back(2);
    
    dq.push_front(100);
    
    // cout<<dq[2];
    
    
    
    while(!dq.empty())
    {
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    
    
    100 1 2 
    
    
    multimap
}
