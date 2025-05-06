#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0;i<n;i++)
    {
        //store i as minIndex
        //traverse the j to the end by assigning
        //swap it
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}
