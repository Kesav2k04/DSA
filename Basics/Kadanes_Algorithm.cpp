#include<bits/stdc++.h>
using namespace std;

void kadane(vector<int>& arr)
{
    int sum=0;
    int maxSum=INT_MIN;
    int start=-99;
    int end=-99;
    int initialStart=0;
    
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
        if(maxSum<sum)
        {
            maxSum=sum;
            start=initialStart;
            end=i;
        }
        
        if(sum<0)
        {
            sum=0;
            initialStart=i+1;
        }
    }
    
    for(int i=start;i<=end;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    vector<int>arr={-2,1,-3,4,-1,2,1,-5,4};
    kadane(arr);
}
