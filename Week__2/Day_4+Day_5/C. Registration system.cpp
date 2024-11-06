#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin>>t;
    map<string,int>mp;

    while (t--) {

            string s;
            cin>>s;
            if(mp.count(s)==0){
                cout<<"OK"<<'\n';
                mp[s]=1;
            }else{
              cout<<s<<mp[s]<<'\n';
              mp[s]+=1;
            }
    }
    return 0;
}
