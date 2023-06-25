#include<bits/stdc++.h>
using namespace std;
void frequency(int arr[],int n){
    unordered_map<int,int>mpp;
    for (int i=0;i<n;i++){
        mpp[arr[i]]++;

    }
    int max_freq=0,min_freq=n;
    int max_ele=0,min_ele=0;
    for(auto it:mpp){
        int count=it.second;
        int element=it.first;
        if(count>max_freq){
            max_ele=element;
            max_freq=count;
        }
        if(count<min_freq){
            min_ele=element;
            min_freq=count;
        }

    }
    cout<<max_ele<<endl;
    cout<<min_ele<<endl;
    


}
int main(){
    int n;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    frequency(arr,n); 
}

