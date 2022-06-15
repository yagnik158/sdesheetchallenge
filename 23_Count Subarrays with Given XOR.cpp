#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    map<int,int>m;
    int cnt=0,y=0;
    for(int i=0;i<arr.size();i++){
        y=y^arr[i];
        if(y==x)cnt++;cnt+=m[y^x];
//         cout<<y<<" "<<m[y^x]<<" "<<(y^x)<<endl;
        m[y]++;
    }
    return cnt;
}
