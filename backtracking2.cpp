#include<bits/stdc++.h>
using namespace std;
void printN(int i,int n){
    if(i>n) return;
    printN(i+1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    printN(1,n);
}