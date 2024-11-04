#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while(t--) {
  int n;
  cin >> n;
  int day=0;
  for(int i=2;i<=n;i+=7){
    day +=1;
  }

   cout<< day <<'\n';
  }

   return 0;
}



