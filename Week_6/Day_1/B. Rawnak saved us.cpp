#include<bits/stdc++.h>
using namespace std;
int  main(){
   int n;
   cin>>n;
   vector< int>v(n);
   int ans=0;
   for(int i=0;i<n;i++) {
        cin>> v[i];
       ans=max(ans,(v[i]*(i+1)));
   }
  // long long ans= *max_element(v.end(),v.begin());

   cout << ans<< endl;
   return 0;
}

