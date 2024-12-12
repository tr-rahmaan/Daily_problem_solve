#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        long long  ans=1e18;
        bool flag=false;
        for(int i=0;i<n;i++){
                if(v[i]>=k){
          remain=(v[i]%k);
         ans=min(ans,remain);
         flag=true;
                }
        }
        if(flag) cout<< ans<< endl;
        else cout << "-1"<<endl;
    }
    return 0;
}
