#include<bits/stdc++.h>
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int t;
    cin>>t;
    while (t--) {
        long long int n,l,r;
        cin>>n>>l>>r;

        long long int hp=0;
        long long int sd=0;

        long long int hpa=0;
        long long int sda=0;

        for (int i=0;i<n;i++) {
            int a;
            cin>>a;

            if (a>=l&& a <=r) {
                hp++;
                hpa=max(hpa,hp);

            } else {
                hp--;
                sda=min(sda,hp);

               // hp=hp-1;
            }
           // cout<<hp<<" "<<sd<<endl;
        }
       // if(hp<0)cout<<"0"<<" "<<sd<<endl;
        cout<<hpa<<" "<<sda<<endl;

     }

    return 0;
}

