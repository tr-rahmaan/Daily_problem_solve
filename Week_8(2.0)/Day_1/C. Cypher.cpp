#include<bits/stdc++.h>
using namespace std;
int main(){
  int q;
  cin >> q;
  while(q--)
  {
      int n;
      cin >> n;
      vector<int > v(n);
      for(int i =0 ;i < n;i ++)
      {
          cin >> v[i];
      }
      for(int i = 0;i<n;i++)
      {
          int b;
          string s;
          cin >> b >> s;
          for(int j = 0;j<b;j++)
          {
              if(s [j] == 'U'){
                    v[i]--;
              }
             else if(s[j] == 'D'){
                    v[i]++;
                    }
            if(v[i] < 0){v[i]+=10;}
            if(v[i] > 9){v[i]-=10;}
          }
      }
      for(auto u:v) cout << u <<" ";
      cout << endl;


  }
  return 0;
}
