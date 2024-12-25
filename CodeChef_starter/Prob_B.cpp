
#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  cin >> q;
  while(q--){
      long long  h,l,w;
      cin >> h >> l >> w;
      long long total;
      total=2*(h*l+l*w+w*h);
      cout<<(long long)1000/total<<'\n';

  }
}

