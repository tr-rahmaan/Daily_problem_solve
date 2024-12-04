#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  cin >> q;
  while(q--)
{
  int n,k;
  cin >> n >> k;
  int a=0,b=1;
  int cnton=0,cntz=0;
  for(int i=0;i<n;i++){
      if(a==0){
          cntz+=0;
          a=1;
      }else if(a==1){
          cntz+=1;
          a=0;
      }

       if(b==0){
          cnton+=0;
          b=1;
      }else if(b==1){
          cnton+=1;
          b=0;
      }
  }

  if(cntz==k || cnton==k){
      cout<<"YES"<<endl;
  }
 else {
     cout<<"NO"<<endl;
 }
}
}
