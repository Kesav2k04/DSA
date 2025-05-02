//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
  
    int kadane(vector<int>& temp,int& start,int& end)
    {
        int s=-999,e=-999;
        int sum=0;
        int initialStart=0;
        int maxSum=INT_MIN;
        
        for(int i=0;i<temp.size();i++)
        {
            sum+=temp[i];
            
            if(maxSum<sum)
            {
                maxSum=sum;
                s=initialStart;
                e=i;
            }
            
            if(sum<0)
            {
                sum=0;
                initialStart=i+1;
            }
        }
        
        //Dont Forget To Update Your Reference Start And End for printing 2D SUBARRAY
        start=s;
        end=e;
        
        return maxSum;
    }
    
    int maximumSumRectangle(vector<vector<int>> &mat) {
        
        int m=mat.size();     //row=4
        int n=mat[0].size();   //col=5  
        
        int maxSum=INT_MIN;
        
        //TO PRINT THE 2D SUBARRAY
        int finalLeft=-1;
        int finalRight=-1;
        int finalTop=-1;
        int finalDown=-1;
        
        
        for(int topRow=0;topRow<m;topRow++)
        {
            vector<int>temp(n,0);
            for(int row=topRow;row<m;row++)
            {
                for(int col=0;col<n;col++)
                {
                    temp[col]+=mat[row][col];
                }
                
                int start=0,end=0;
                int sum=kadane(temp,start,end);
                
                //correct for this sum 
                //maxSum=max(maxSum,sum);
    
                //THIS IS FOR CHECKING THE 2D SUBARRAY AND PRINT IT
                
                if(maxSum<sum)
                {
                    maxSum=sum;
                    finalLeft=start;
                    finalRight=end;
                    finalTop=topRow;
                    finalDown=row;
                }
                
                
            }
        }
        
        for(int i=finalTop;i<=finalDown;i++)
        {
            for(int j=finalLeft;j<=finalRight;j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        
        cout<<endl<<endl<<endl;
        
        return maxSum;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++)
                cin >> v[i][j];
        Solution ob;
        cout << ob.maximumSumRectangle(v) << "\n";

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends
