#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "Alphabet";
    // s.replace(6, 5, "C++"); 
    // s.replace(0,5,"Bye");
    // start at index 6, replace 5 characters ("world") with "C++"
    
    // string :: npos
    if(s.find('p') != string::npos)
    {
        cout<<"Yes";
    }
    else
    cout<<"No";
    

    cout << s;  // Output: hello C++
    
    
    
    stack<int>st;
    st.push(3);
    st.push(4);
    // st.pop();
    
    stack<int>temp;
    
    while(!st.empty())
    {
        temp.push(st.top());
        st.pop();
    }
    
    // stack<int> st2(st1);
    
    //stack set map
    
    
    while(!temp.empty())
    {
        cout<<temp.top()<<" ";
        temp.pop();
    }
    
    
    cout<<temp.size();
    
    
    queue<int>q;
    
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(100);
    
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        cout<<q.back();
        q.pop();
    }
    //   queue<int> q2(q1);
    
    
    Maxheap
    priority_queue<int>q;
    Minheap
    priority_queue<int, vector<int>, greater<int>>q;
    
    q.push(10);
    q.push(1);
    q.push(12);
    q.push(-1);
    q.push(7);
    
    while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    
    
    set<int>st;
    
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(2);
    
    // auto it = st.find(3);
    
    // if(st.find(3)!=st.end())
    // cout<<"Yes";
    
    // st.erase(s.begin());
    
    unordered_set<int,int>st;
    
    
    for(auto it : st)
    cout<<it<<" ";
    
    
}
