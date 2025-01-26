#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n;
        vector<int>v(n);
        vector<int>d;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            d.push_back(v[i]);
        }
        sort(v.begin(),v.end());
        int mis=0;
        for(int i = 0; i < n; i++)
        {

           if(v[i]!=d[i])mis++;
        }
        int f=(mis+1)/2;
        if(f<=k) cout<<"YES"<<endl;
        else cout <<"NO"<<endl;

    }
    return 0;
}

