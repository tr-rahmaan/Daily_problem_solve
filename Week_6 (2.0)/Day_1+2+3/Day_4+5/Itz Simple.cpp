#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--)
  {
      int n,k,p;
      cin>> n >> k>> p;
      vector<int>v(n);
      int x=0,sum=0;
      for(int i=0;i<n;i++){
          cin >> v[i] ;
          x=max(x,v[i]);
          sum+=v[i];
      }
      int ved=k+x;
     // cout<<ved<<endl;
       int var=p+(sum-x);
      // cout<<var<<endl;
      if(ved>var){
          cout<<"Ved"<<endl;
      }
      else if(ved<var){
          cout<<"Varun"<<endl;
      }else {
          cout<<"Equal"<<endl;
      }
  }
}
