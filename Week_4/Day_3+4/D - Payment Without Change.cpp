#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int q;
    cin >> q;
    while(q--){
        long long int a, b,n,s;
        cin >> a >> b >> n >> s;

         long long need =s%n;
        // long long int need=s-tk;

        if( need<=b &&  a*n+b>=s) cout <<"YES"<<endl;

        else cout<< "NO" <<endl;
    }
    return 0;
}
