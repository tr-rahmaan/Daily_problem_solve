#include<bits/stdc++.h>
using namespace std;
int main(){

  int q;
  cin >> q;
  while( q--){
      long long  n,x,y;
     cin >> n >> x >> y;
     long long sum=0;
     vector<long long > v(n);
     for(int i=0;i<n;i++) cin >> v[i];

      for(int i=0;i<n;i++){

      int nor=v[i]*x;
      if(nor<y){
        sum=sum+nor;
      }else {
         sum=sum+y;
      }
      }

      cout << sum << endl;
  }
  return 0 ;
}
