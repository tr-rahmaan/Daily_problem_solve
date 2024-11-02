#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
    while(t--){

         int a;
         cin>>a;
         vector<int>v(a);
         for(int i=0;i<a;i++){
            cin>>v[i];
         }
         bool flag= true;
         for(int i=0;i<a-1;i++){
           int d=abs(v[i]-v[i+1]);
           if(d==7 || d==5){
            flag=true;
           }else{
             flag= false;
             break;
           }
         }

         if(flag==true) cout<<"YES"<<'\n';

         else cout<<"NO"<<'\n';
    }
   return 0;
}
