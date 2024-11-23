#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int >v(n),t(m);
    vector<int>cnt;
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=0;i<m;i++) cin >> t[i];
    int c=0;
    int l=0,r=0;
    while(r<m){
        if(v[l]<t[r] && l<n){
            c+=1;
            l++;
        }else{
           cnt.push_back(c);
           r++;
        }
    }
    for(auto u: cnt) cout << u <<" ";
    cout <<'\n';
    return 0;
}
