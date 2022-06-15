#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    //Write your code here
    map<char,int>m;
    int mx=0,l=0,r=0;
    int n=s.length();
    while(r<n){
        if(m[s[r]]!=0){
            l=max(m[s[r]]+1,l);
        }
        mx=max(mx,(r-l+1));
        m[s[r]]=r;
        r++;
    }
    return mx;
}
