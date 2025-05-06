#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    
    //23 1
    //j  i
    for(int i=0;i<n;i++)
    {
        int j=i-1;

        while(j>=0)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                j--;
            }
            else
            {
                break;
            }
            //else for breaking when they are in ascending order no need to swap
        }
    }
}
