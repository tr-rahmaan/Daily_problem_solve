#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    multiset<int>s;
    for(int i=0;i<n;i++)
    {
     int x;
     cin>>x;
     s.insert(x);
    }


    int j=1,ans=0;
    while(!s.empty()){
        auto it=s.lower_bound(j);
        if(it!=s.end()){
            ans+=1;
            s.erase(it);
            j++;
        }else{
          break;
        }
    }
    cout<<ans <<'\n';
   return 0;
}
