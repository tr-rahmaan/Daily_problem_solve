#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,x;
    cin >>n >> x;
    vector<long long int>v(n);

    for(int i = 0 ; i < n ; i++) cin >> v[i];
    long long cnt=0;
    long long l=0,r=0,sum=0;
    while(r<n)
    {
       if(v[r]==x)
    {
        cnt++;
          l=r+1;
         r++;
         sum=0;
            continue;
       }
        sum+=v[r];
        if(sum>x  )
        {
            while(sum>x && l <=r)
            {
                sum-=v[l];
                l++;
            }
        }
        if(sum==x) { cnt++;

        }
        r++;

    }

    cout << cnt<<endl;
    return 0;
}
