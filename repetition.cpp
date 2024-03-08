#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    string str="";
    int cnt=0,max=0;
    cin>>str;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]==str[i+1])
        cnt++;
        else{
            if(max<cnt)
            max=cnt;
            cnt=0;
        }i++;
    }cout<<max+1;
    return 0;
}