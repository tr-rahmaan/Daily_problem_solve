#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  cin >> q;
  while(q--){
      int n;
      cin >> n;
      long long sum=0;
      for(int i=0 ;i<n ;i++){
          int x;
          cin>>x;
          sum=(sum+x);
      }
      int total=(n+1)*100;
      int pass= total/2;
      //cout<<pass<<endl;
      if(pass-sum>100) cout <<-1<<endl;
      else if(sum>=pass) cout<<0<<endl;
      else cout<<pass-sum<<endl;
  }
}

