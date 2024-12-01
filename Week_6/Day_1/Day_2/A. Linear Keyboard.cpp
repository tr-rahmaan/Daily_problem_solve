#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        string k;
        cin >> k;
        string s;
        cin >> s;
        unordered_map<char,int>mp;
        for(int i=0;i<26;i++){
            mp[k[i]]=i;
        }
        int ans=0,prev=mp[s[0]];
        for(auto u:s){
            int cur=mp[u];
            ans+=abs(cur-prev);
            prev=cur;
        }
        cout << ans<<endl;

    }
    return 0;
}
