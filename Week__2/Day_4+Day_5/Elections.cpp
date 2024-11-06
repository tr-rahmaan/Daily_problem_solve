#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--)
  {
      long long avot=0,bvot=0;
      int n, x;
      cin>>n>>x;
      int a;
     // int l=(n*2)/2;
     vector<int>s1;
     vector<int>s2;
     int need;
      for(int i=1;i<=n*2;i++){
          cin>>a;
          if(i>n){
              s2.push_back(a);
          }else{
              s1.push_back(a);
          }
      }
      for(int i=0;i<n;i++){
        if(s1[i]>s2[i]) avot+=1;
        if(s1[i]<=s2[i]){
            //bvot+=1;
            need=(s2[i]-s1[i])+1;
            if(need<=x){
                    avot+=1;
                    x=x-need;
            }else{
                bvot+=1;
            }
        }

      }
      if(avot>=(n+1)/2){
        cout<<"YES"<<'\n';
      }else{
        cout<<"NO"<<'\n';
      }

  }

}

