#include <bits/stdc++.h>
using namespace std;

int main() {
 int q;
 cin >> q;
 while(q--)
 {
     int n;
     cin >> n;
     map<int,int>mp;
     for(int i =0;i<n;i++)
     {
          int x;
         cin >> x;
         mp[x]=max(mp[x],i);
     }

     long long int total =0;
     for(auto [key,val] :mp)
     {
        total =total+val+1;
     }
   cout << total <<'\n';
}
return 0;
}

