#include<bits/stdc++.h>
using namespace std;


int main() {

  int n;
  cin>>n;
   int arr[n];
   int mn=10e10;
 long long sum=0;
 for(int i=0;i<n;i++){
  cin>>arr[i];
  if(arr[i]%2!=0){
    mn=min(arr[i],mn);
  }
  sum+=arr[i];

 }
 if(sum%2==0){
    cout<<sum<<endl;
 }else{
     cout<<sum-mn<<endl;
 }

  return 0;
}
