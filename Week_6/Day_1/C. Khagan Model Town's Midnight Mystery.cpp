#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>> n;
     vector<int>v(n);
     vector<int>p(n);
     vector<long long int>c(n);
     for(int i=0;i<n;i++) cin>> v[i];
      for(int i=0;i<n;i++) cin>> p[i];
       for(int i=0;i<n;i++) {
        c[i]=(long long)v[i]*p[i];
       }

       sort(c.rbegin(),c.rend());
       for(auto u: c) cout <<u<<" ";
       cout<<endl;
    return 0;
}
