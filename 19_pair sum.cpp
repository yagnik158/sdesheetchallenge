#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    map<int,int>m;
    vector<vector<int>> v;
    vector<int> v1;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(m[s-arr[i]]!=0){
            v1.clear();
            v1.push_back(s-arr[i]);
            v1.push_back(arr[i]);
            for(int j=0;j<m[s-arr[i]];j++){
                v.push_back(v1);
            }
        }
        m[arr[i]]++;
    }
    reverse(v.begin(),v.end());
    return v;
}
