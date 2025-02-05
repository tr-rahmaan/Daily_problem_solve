#include <bits/stdc++.h>
using namespace std;

int main() {
     int  t;
      cin >> t;
      while(t--)
      {
          int n,orr;
          cin >>n;
          vector<int>v(n);
          int x;
          cin >> x;
          int ans=1,cnt=1;
          for(int i = 0 ; i < n ; i++) cin >> v[i];


          for(int i = 0 ; i < n-1 ; i++)
          {
             if(v[i+1]>=v[i]){
                cnt++;
             }else{
               cnt=1;
             }
             ans=max(cnt,ans);

          }


            for(int i = 0 ; i < n ; i++)
          {
              orr=v[i];
              v[i]=v[i]*x;
              int inc=1;

              for(int j =0;j<n-1;j++)
              {
                  if(v[j]>v[j+1]){
                    break;
                  }else{
                    inc++;
                  }
              }
             // v[i]=(v[i]/x);
              ans=max(ans,inc);
              v[i]=orr;
          }

          cout<< ans<< endl;
      }


}

