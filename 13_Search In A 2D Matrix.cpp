#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    int l=0,h=(m*n)-1,mid;
    while(l<=h){
        mid=(l+((h-l)/2));
        if(mat[mid/n][mid%n]==target)return true;
        else if(mat[mid/n][mid%n]>target)h=mid-1;
        else l=mid+1;
    }
    return false;
}
