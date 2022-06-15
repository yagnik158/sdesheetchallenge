#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &it)
{
    // Write your code here.
    int x=0;
    vector<vector<int>> v;
    sort(it.begin(),it.end());
    for(int i=1;i<it.size();i++){
        if(it[x][1]>=it[i][0]){
            it[x][1]=max(it[x][1],it[i][1]);
        }else{
            v.push_back(it[x]);
            x=i;
        }
    }
    v.push_back(it[x]);
    return v;
}
