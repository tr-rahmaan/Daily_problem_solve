#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int x,y;
    cin>>x>>y;
    if(x>=y) cout<<x%3<<endl;
    else cout<< y%3<< endl;
  }
     return 0;
}

