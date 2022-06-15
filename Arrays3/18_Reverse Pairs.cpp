#include <bits/stdc++.h> 
int mergesort(vector<int> &arr,int l,int mid,int h){
    int cnt=0;
    int j=mid,i;
    for(i=l;i<mid;i++){
        while(j<=h && arr[i]>2*arr[j]){
            j++;
        }
        cnt+=j-mid;
    }
    vector<int> v;
    i=l,j=mid;
    while(i<mid && j<=h){
        if(arr[i]>arr[j])v.push_back(arr[j++]);
        else v.push_back(arr[i++]);
    }
    while(i<mid)v.push_back(arr[i++]);
    while(j<=h)v.push_back(arr[j++]);
    for(int i=l;i<=h;i++)arr[i]=v[i-l];
    return cnt;
    
}

int merge(vector<int> &arr, int l,int h){
    if(l>=h)return 0;
    int mid=(l+h)/2;
    int cnt=merge(arr,l,mid);
    cnt+=merge(arr,mid+1,h);
    cnt+=mergesort(arr,l,mid+1,h);
    return cnt;
}
int reversePairs(vector<int> &arr, int n){
	// Write your code here.	
    return merge(arr,0,n-1);
    
}
