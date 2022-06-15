#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    int cnt=0,x=0;
    for(int i=0;i<n;i++){
        if(cnt==0)x=arr[i];
        if(arr[i]==x)cnt++;
        else cnt--;
    }
    cnt=n/2;
    for(int i=0;i<n;i++)if(arr[i]==x)cnt--;
    if(cnt<0)return x;
    return -1;
}
