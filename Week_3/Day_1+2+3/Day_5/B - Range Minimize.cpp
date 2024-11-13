#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        sort(v.begin(),v.end());
        int fst=v[n-1]-v[2];
        int last=v[n-3]-v[0];
        int third=v[n-2]-v[1];
        cout<<min({fst,last,third})<<'\n';
    }


    return 0;
}
