#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code her.
    int x=1,m=1;
    sort(arr.begin(),arr.end());
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]+1)x++;
        else if(arr[i]==arr[i-1])x;
        else x=1;
        m=max(m,x);
    }
    return m;
}
