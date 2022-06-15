#include <bits/stdc++.h> 
int maximumProfit(vector<int> &p){
    // Write your code here.
    int i1=INT_MAX,j1=0,sum=0,n=p.size();
    for(int i=0;i<n;i++){
        i1=min(i1,p[i]);
        j1=p[i]-i1;
        sum=max(sum,j1);
    }
//     cout<<i1<<j1<<endl;
    return sum;
}
