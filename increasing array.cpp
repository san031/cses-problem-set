#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main(){
    long n,a,i=0,cnt=0;
    cin>>n;
    vector<long>arr;
    vector<long>vec;
    while(i<n){
        cin>>a;
        arr.push_back(a);
        i++;
    }
    vec.push_back(arr[0]);
    for(i=0;i<n-1;i++){
        if(vec[i]<=arr[i+1])
        vec.push_back(arr[i+1]);
        else{
            cnt+=(vec[i]-arr[i+1]);
            vec.push_back(vec[i]);
        }
    }
    cout<<cnt;
    return 0;
}