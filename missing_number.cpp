#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
void missing_number(vector<int>&arr,int &t){
    vector<int>arr1;
    int XOR=0;
    for(int i=0;i<t;i++)
    //arr1[i]=i+1;
    arr1.push_back(i+1);
    arr1.insert(arr1.end(),arr.begin(),arr.end());
    int n=arr1.size();
    for(int i=0;i<n;i++){
        XOR=XOR^arr1[i];
    }
    cout<<XOR;
}
int main(){
    int t,a;
    vector<int>arr;
    cin>>t;
    for(int i=0;i<t-1;i++){
        cin>>a;
        arr.push_back(a);
    }missing_number(arr,t);
    return 0;

}