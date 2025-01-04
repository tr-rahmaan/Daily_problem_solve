#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r,x;
    cin >> n >> l >> r >> x;
    vector<int>v(n);
    for( int i =0 ;i < n;i++)
    {
        cin >> v[i];
    }
    int way=0;
    for(int mask=0;mask<(1<<n);mask ++)
    {
        int mx_diff=0,mn_diff=1e9,cnt=0,sum=0;
        for(int i =0 ;i<n;i++)
        {
            if(mask>>i &1){
                    sum+=v[i];
                mx_diff=max(mx_diff,v[i]);
                mn_diff=min( mn_diff,v[i]);
                cnt++;
            }
        }

        if(mx_diff- mn_diff>=x && cnt >=2 && sum>=l && sum<=r) way++;
    }
    cout << way <<'\n';

    return 0;
}
