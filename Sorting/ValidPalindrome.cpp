class Solution {
public:
    bool isPalindrome(string s) {

        string str="";
        for(char c:s)
        {
            if(isalnum(c))
                str+=tolower(c);
        }

        int n=str.length();
        int l=0,r=n-1;
        while(l<r)
        {
            if(str[l]!=str[r])
                return false;
            
            l++;
            r--;
        }
        return true;
    }
};
