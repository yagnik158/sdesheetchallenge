#include <bits/stdc++.h> 

int nextgap(int gap){
    if(gap==1)return 0;
    return (gap/2)+(gap%2);
}

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    int x=arr1.size();
    for(int i=m;i<x;i++)
        arr1[i]=arr2[i-m];
    for(int i=nextgap(x);i>0;i=nextgap(i)){
        for(int j=0;j+i<x;j++){
            if(arr1[j]>arr1[j+i])swap(arr1[j],arr1[j+i]);
        }
    }
    return arr1;
}
