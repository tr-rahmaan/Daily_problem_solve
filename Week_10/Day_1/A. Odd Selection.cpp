#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        int odcnt = 0, evcnt = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] & 1) odcnt += 1;
            else evcnt += 1;
        }
        int d= min(evcnt,k-1);
        int m= k-d;
        if(m%2==0) m++;
        if(odcnt>=m && m<=k) cout <<"YES"<<endl;
        else cout <<"NO"<<endl;

    }
    return 0;
}
