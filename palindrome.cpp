#include<bits/stdc++.h>
using namespace std;
bool palindrome(int n){
    int temp=n;
    int rev=0;
    while(n>0){
        int ld=n%10;
        rev=(rev*10)+ld;
        n=n/10;
    }
    if (temp==rev){
        return true;
    }
    else{
        return false;
    }
    
}   
int main(){
    int n;
    cin>>n;
   bool isPalindrome=palindrome(n);
   if(isPalindrome){
    cout<<"true";
   }
   else{
    cout<<"false";
   }
}