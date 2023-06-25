#include<bits/stdc++.h>
using namespace std;
void revNum(int i,int n){
    if(i<1) return;
    cout<<i<<endl;
    revNum(i-1,n);
}
int main(){
    int n;
    cin>>n;
    revNum(n,n);
}