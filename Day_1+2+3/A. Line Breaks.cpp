#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--){
        int n,m,p;
        int ans=0;
        vector<string>v;
        string s;
        cin >> n >> m;
        while(n--)
        {
            cin >> s;
            v.push_back(s);
        }
        int x=m;
        for(int i=0;i<m;i++)
        {
            if(v[i].size()<=x)
            {
                ans+=1;
                x=x-v[i].size();
            }else{
              break;
            }
        }

       cout << ans << '\n';
    }
    return 0;
}
