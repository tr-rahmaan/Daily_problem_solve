#include<bits/stdc++.h>
using namespace std;

int main(){
  int q;
  cin >> q;
  while(q--)
  {
      int n;
      cin >> n;
      vector<int>v(n);
      for(int i =0 ;i< n ;i++) cin >> v[i];
      int ans =0;
      int cnt =0;
      for(int i = n-1 ;i>=0;i--)
      {
          if(v[i]>v[i-1])
          {
              int j = i-1;
              while(j>=0  && v[i]>v[j])
              {

                  cnt++;
                  j--;
              }

          }
          ans=max(ans,cnt);
          cnt = 0;
      }
      cout << ans << '\n';

  }
  return 0;
}
