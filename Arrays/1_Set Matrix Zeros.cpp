#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &m)
{
	// Write your code here.
    map<int,int> x,y;
    for(int i=0;i<m.size();i++){
        for(int j=0;j<m[0].size();j++){
            if(m[i][j]==0){
                x[i]=1;
                y[j]=1;
            } 
        }
    }
     for(int i=0;i<m.size();i++){
        for(int j=0;j<m[0].size();j++){
            if(x[i]!=0 || y[j]!=0)m[i][j]=0; 
        }
    }
}
