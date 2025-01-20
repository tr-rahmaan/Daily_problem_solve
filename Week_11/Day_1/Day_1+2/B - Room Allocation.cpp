#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,sum=0;
        cin >> n ;
        vector<int>v(n);
        for(int i = 0 ;i < n ; i++ )
        {
            cin >> v[i];
            if(v[i]>=2)sum+=(v[i]/2)+(v[i]%2);
            else sum+=v[i];
        }
        cout << sum << endl;
       // int
    }
}
