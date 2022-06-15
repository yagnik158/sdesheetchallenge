#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int x=0,y;
    for(int i=0;i<n;i++)x=x^arr[i]^(i+1);
    string s=bitset<13>(x).to_string(),s1;
    for(int i=12;i>=0;i--){
        if(s[i]=='1'){
            y=i;
            break;
        }
    }
    vector<int> v1,v2;
    for(int i=1;i<=n;i++){
        s=bitset<13>(arr[i-1]).to_string();
        s1=bitset<13>(i).to_string();
        if(s[y]=='1')v1.push_back(arr[i-1]);
        if(s[y]=='0')v2.push_back(arr[i-1]);
        if(s1[y]=='1')v1.push_back(i);
        if(s1[y]=='0')v2.push_back(i);
    }
    int x1=0,x2=0;
    for(int i=0;i<v1.size();i++)x1=x1^v1[i];
    for(int i=0;i<v2.size();i++)x2=x2^v2[i];
    for(int i=0;i<n;i++)
        if(arr[i]==x1)return {x2,x1};
    
    return {x1,x2};
    
}
