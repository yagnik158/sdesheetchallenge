#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int n0=0,n1=0,n2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)n0++;
        if(arr[i]==1)n1++;
        if(arr[i]==2)n2++;
    }
    for(int i=0;i<n;i++){
        if(n0>0){
            arr[i]=0;
            n0--;
            continue;
        }
        if(n1>0){
            arr[i]=1;
            n1--;
            continue;
        }
        if(n2>0){
            arr[i]=2;
            n2--;
            continue;
        }
        
        
        
    }
}
