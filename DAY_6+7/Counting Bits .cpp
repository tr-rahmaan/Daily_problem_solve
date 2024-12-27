#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--)
    {


   int n;
   cin >> n;
   int cnt =0;
   for(int i=0;i<=n;i++)
   {
       cnt +=__builtin_popcount(i);
   }
  cout << cnt << '\n';
    }
  return 0;
}

