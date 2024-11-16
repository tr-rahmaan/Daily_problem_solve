#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t ;
    cin >> t;
    while(t--) {
    int n,m;
    cin >> n >> m ;
    string t="";
    char c;
    for(int i=0;i<n;i++){
        for(int i=0;i<m;i++){
            cin>>c;
            if(t.back() != c || t.empty()) t+=c;
        }
    }
    cout<<t<<endl;
    if(t=="vika" ) cout<<"YES"<<endl;
    else {
            string r="";

        for(int i=0;i<t.size();i++){
            // if(t[i]=='v' || t[i]=='i' || t[i]=='k' || t[i]=='a'){
            //    r+=t[i];
            //
            if
            if(r.empty || r.back())
             }
        }
        if(r=="vika")cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    }

    return 0;
}

