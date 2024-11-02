#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
    int a,n;
    cin>>a>>n;
    vector<int>v;
    int an;
    for(int i =0;i< a; i++){
        cin>>an;
        if(an!=n){
            v.push_back(an);
        }
    }

    for(auto u: v) cout<<u<<" ";
    cout<<'\n';
   return 0;
}
