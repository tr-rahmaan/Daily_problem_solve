#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n, k;
        cin >> n >> k;
        vector<int> v, m;
        for(int i= 1 ;i<=n ;i++){
             v.push_back(i);
        }
        int j=n-k;
        for(int i= 1;i<=k ;i++){
             m.push_back(v[j]);
             j++;
        }

        //for(auto u: v) cout<<u <<" ";
        //cout<< endl;

        // for(auto c: m) cout<<c <<" ";
        int f=n-(k+1);
         for(int i=0;i<n-k;i++){
            cout<<v[f]<<" ";
            f--;


        }
         for(auto c: m) cout<<c <<" ";
         cout<<endl;
}

    return 0;
}
