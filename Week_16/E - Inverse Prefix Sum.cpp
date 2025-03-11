#include <bits/stdc++.h>
using namespace std;

int main() {

   int n,q;
   cin >> n ;
   vector<long long int>v(n);

   for(int i = 0 ; i < n ; i++) cin >> v[i];
   vector<long long int>prefix(n);
   prefix[0]=v[0];


    for(int i = 1; i < n ; i++)

    {

        prefix[i]=v[i]-v[i-1];
    }

   for(auto u:prefix)
   {
       cout<<u<<" ";
   }

   cout << endl;
    return 0;
}

