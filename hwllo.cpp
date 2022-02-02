#include<bits/stdc++.h>
using namespace std;

int main(){
int a,b;
cin>>a>>b;
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int count=0;
for(int i=0;i<n;i++){
    if(arr[i]>=a && arr[i]<=b)
    count++;
}

cout<<count;

return 0;


    
}