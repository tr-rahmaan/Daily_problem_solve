#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--)
  {
      int a;
      cin>>a;
      map<int,int>mp;
      for (int i=0;i<a;i++){
        int x;
        cin>>x;
        mp[x]++;
      }
      int cnt=0;
      for(auto [key,val] : mp){
        cnt+=(val/2);
      }
      cout << cnt << endl;
  }
   return 0;
}
