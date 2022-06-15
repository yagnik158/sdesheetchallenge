#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    vector<int> v;
    int num1=-1,num2=-1,c1=0,c2=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==num1)c1++;
        else if(arr[i]==num2)c2++;
        else if(c1==0){
            num1=arr[i];
            c1++;
        }else if(c2==0){
            num2=arr[i];
            c2++;
        }else{
            c1--;
            c2--;
        }
    }
    c1=c2=arr.size()/3;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==num1)c1--;
        if(arr[i]==num2)c2--;
    }
    if(c1<0)v.push_back(num1);
    if(c2<0)v.push_back(num2);
    return v;
}
