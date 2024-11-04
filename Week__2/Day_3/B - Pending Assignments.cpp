#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){

    int x,y,z;
    cin>>x>>y>>z;
    int total=x*y;
    int day=z*24*60;
    if(total<=day) cout<<"YES"<<'\n';

    else cout<<"NO"<<'\n';
   }

}


