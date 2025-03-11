#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long  int n,k;
    cin >> n >> k;
    vector<long long>v(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i];
    }
    vector<long long >prefix(n);
    prefix[0]=v[0];
    for(int i = 1 ; i < n ; i++)
    {
        prefix[i]=prefix[i-1]+v[i];
    }

    while(k--)
    {
       long long  int l,r,c;
       cin >> l >> r >> c;

       long long int ans;
       ans=(prefix[r-1]-prefix[l-2])+(c*(r-l));
       cout<<ans<<endl;
    }
}
