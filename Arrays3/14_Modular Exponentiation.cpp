#include <bits/stdc++.h> 
int modularExponentiation(int x1, int n, int m) {
	// Write your code here.
    long long int ans=1;
    long long x=x1;
    x%=m;
    while(n){
        if(n&1)ans=(ans*x)%m;
        x=(x*x)%m;
        n=n>>1;
    }
    return (int)ans;
}
