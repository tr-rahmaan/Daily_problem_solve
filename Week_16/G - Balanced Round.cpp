#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin >> t;
     while(t--)
     {
        int n,k;
        cin >> n >> k;
        vector<int>v(n);
        vector<int>r;
        int ans=0,len=0;
        for(int i = 0 ; i < n ; i++) cin >> v[i];
        sort(v.begin(),v.end());



        int mxlen=1,cur=1;
        for (int i = 1; i < n; i++) {
            if (v[i] - v[i - 1] <= k) {
                cur++;
            } else {
                mxlen = max(mxlen, cur);
                cur= 1;
            }
        }
       mxlen=max(mxlen,cur);
        cout<<n-mxlen<<endl;
     }
}




