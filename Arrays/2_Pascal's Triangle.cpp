#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
    // Write your code here.
    vector<vector<long long int>> v1(n);
    for(int i=0;i<n;i++){
        v1[i].resize(i+1);
        v1[i][0]=v1[i][i]=1;
        for(int j=1;j<i;j++){
            v1[i][j]=v1[i-1][j]+v1[i-1][j-1];
        }
    }
    return v1;
}
