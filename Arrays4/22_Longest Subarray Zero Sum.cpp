#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
   int sum=0;
   map<int,int>m;
    int mx=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum==0)mx=i+1;
        else{
            if(m[sum]!=0){
                mx=max(mx,i-m[sum]);
            }else m[sum]=i;
        }
    }
    return mx;
}
