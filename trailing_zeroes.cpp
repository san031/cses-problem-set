#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int temp=0,x=1,a=5;
    while(x>0){
        x=num/a;
        temp+=x;
        a=a*5;
    }cout<<temp;
    return 0;
}