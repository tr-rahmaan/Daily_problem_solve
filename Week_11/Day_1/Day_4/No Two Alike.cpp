#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        unordered_map<int,int>ind;
        unordered_map<int,int>fund;
        for(int i = 0;i < n;i ++)
        {

            cin >> v[i];
            ind[v[i]]=i;
        }
       int ans=0;
       for(int i = 0; i< n;i++)
       {
           int last=ind[v[i]];
           while(i<last && i<n)
           {
               last=max(last,ind[v[i]]);
               if(fund[v[i]]==0)
               {
                   ans++;
                   fund[v[i]]++;
               }
               i++;
           }

       }
       cout << ans << '\n';
    }
    return 0;
}
