#include <bits/stdc++.h>
using namespace std;

int main() {

   int n,q;
   cin >> n >> q;
   vector<long long int>v(n);

   for(int i = 0 ; i < n ; i++) cin >> v[i];
   vector<long long int>prefix(n);
   prefix[0]=v[0];


    for(int i = 1; i < n ; i++)

    {

        prefix[i]=v[i]+prefix[i-1];
    }

    while(q--)
    {
        int l,r;
        cin >> l >> r;
        if (l == 1) cout << prefix[r-1] << endl;
        else cout<<prefix[r-1]-prefix[l-2]<<endl;
    }
    return 0;
}

