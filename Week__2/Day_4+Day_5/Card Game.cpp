#include <bits/stdc++.h>
using namespace std;

bool odd(int a){
    if(a%2!=0) return true;
    return false;
}

int main() {
     ios_base::sync_with_stdio(0);
     cin.tie(nullptr);
     int t;
     cin>>t;
     while(t--)
     {
         int n,x;
         cin>>n>>x;
         int cnt=0;
        // cout<<odd(x)<<endl;
         if(odd(x)){
             for(int i=1;i<=n;i+=2){
                 if(i==x){
                     continue;
                 }
                  cnt+=1;
             }
         }else{
             for(int i=2;i<=n;i+=2){
                 if(i==x){
                     continue;
                 }
                 cnt+=1;
             }
         }
         cout<<cnt<<'\n';
     }


     return 0;
}

