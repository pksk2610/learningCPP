#include<bits/stdc++.h>
using namespace std;
int revNo(int n){
    int revNum=0;
    while(n>0){
        int ld=n%10;
        revNum=(revNum*10)+ld;
        n=n/10;

    }
    return revNum;
}

int main(){
    int n;
    cin>>n;
    int revNum=revNo(n);
    cout<<revNum;
}