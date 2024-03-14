#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int cnt=0;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    do{
        //cout<<s<<endl;
        cnt++;
    }while(next_permutation(s.begin(),s.end()));
    cout<<cnt<<endl;
    do{
        cout<<s<<endl;
        cnt++;
    }while(next_permutation(s.begin(),s.end()));
    return 0;
}