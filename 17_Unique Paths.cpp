#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code here.
    int t=n+m-2;
    int d=m-1;
    double x=1;
    for(int i=1;i<=d;i++){
        x=x*(t-d+i)/i;
    }
    return (int)x;
}
