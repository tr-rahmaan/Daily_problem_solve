#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,k ;
    cin >> n >> k;
    vector<int >v(n);
    for(int i =0;i<n;i++)  cin >> v[i];
    int l=0,r=0;
    int sum=0;
    int ans=0;
    while(r<n){
         sum+=v[r];
        if(r-l+1==k){
            ans=max(sum,ans);
            sum= sum-v[l];
            l++;
            r++;

        }else {
            r++;
        }
       // cout << sum << endl;
    }

    cout << ans << endl;


    return 0;
}
