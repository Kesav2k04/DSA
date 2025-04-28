// You are using GCC
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void func(vector<int>& arr)
{
    arr[0]=100;
}
push_back();
pop_back()
arr.begin()
v.begin() v.end();
arr.erase()
resize()
back()

void reverse(vector<int>& arr)
{
    // 1 2 3 4 5 6 7 
    int l=0;
    int r=arr.size()-1;
    while(l<r)
    {
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
}
int main()
{
    vector<int>t;
    vector<int>arr={1,100,3,4,5,6,7};
    arr.pop_back();
    func(arr);
    arr.insert(arr.begin()+1,99);
    
    auto it = arr.end()-1;
    To access the iterated element
    cout<<*it;
    
    sort(arr.begin(),arr.end());
    sort(arr.begin(),arr.end(),greater<int>());
    
    arr.erase(arr.begin()+1);
    
    arr.erase(arr.begin()+1,arr.begin()+4);
    
    vector<int>temp=arr;
    
    t.resize(20,-1);
    
    
    cout<<arr.empty();
    
    cout<<arr.back();
    
    
    reverse(arr.begin(),arr.end());
    
    int mini=*min_element(arr.begin(),arr.end());
    cout<<mini;
    
      int maxi=*max_element(arr.begin(),arr.end());
      cout<<maxi;
    
    int sum=accumulate(arr.begin(),arr.end(),0);
    cout<<sum;
    
      vector<int>arr={1,100,3,100,4,5,6,7};
      
      Returns Iterator
      auto it = find(arr.begin(),arr.end(),7);
      
      if(it==arr.end())
      {
          cout<<"No";
      }
      else
      {
          cout<<"Yes";
      }
    
    if(find(arr.begin(),arr.end(),100) == arr.end())
    cout<<"No";
    else
    cout<<"Yes";
    
    Return Integer
    int cnt=count(arr.begin(),arr.end(),100);
    cout<<cnt;
    
    if(is_sorted(arr.begin(),arr.end()))
    cout<<"Sorted";
    else
    cout<<"No";
    
    
    
    for(auto ele : arr)
    cout<<ele<<" ";
    
    for(int i=0;i<arr.size();i++)
    cout<<arr[i];
    
   2d vector
   
  vector<int>ar={1,9,23,4,4,4};
  vector<vector<int>>d;
   
  d.push_back({1,2,3,4});
  d.push_back({1,2,3,4,5});

Traverse
   
  for(auto row : d)
  {
      for(auto ele : row)
      cout<<ele<<" ";
       
      cout<<endl;
  }
   
  for(int i=0;i<d.size();i++)
  {
      for(int j=0;j<d[i].size();j++)
      {
          cout<<d[i][j]<<" ";
      }
      endl;
  }
  
  int rows=3;
  int cols=4;
  
  vector<vector<int>>arr(rows, vector<int>(cols,-1));
  vector<vector<int>>d(rows, vector<int>(cols));
  
     for(int i=0;i<d.size();i++)
  {
      for(int j=0;j<d[i].size();j++)
      {
          cin>>d[i][j];
      }
      endl;

    for(int i=0;i<rows;i++)
    {
        if(is_sorted(d[i]))
        cout<<yes;
    }
   
   
        
   
    
    
}
