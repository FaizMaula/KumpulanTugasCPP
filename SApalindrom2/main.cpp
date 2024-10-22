class Solution{
public:
bool ispalindrome(int i,int j,string &s)
    {
        int k,l;
        k=i;l=j;
        while(k<l)
        {
            if(s[k++]!=s[l--])
                return false;
        }
        return true;
    }
    string longestPalindrome(string s){
        // code here
        int n=s.size();
        string ans="";
        int maxlen=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(ispalindrome(i,j,s)&&(j-i+1)>maxlen)
                {
                    maxlen=j-i+1;
                    ans=s.substr(i,maxlen);
                }
            }
        }
        return ans;
    }
};
