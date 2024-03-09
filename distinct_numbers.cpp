#include<iostream>
#include<stdio.h>
#include<set>
#include<vector>
using namespace std;
int main(){
    int n,a;
    vector<int>v;
    set<int>s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    for(auto it:v){
        s.insert(it);
    }cout<<s.size();
    return 0;
}