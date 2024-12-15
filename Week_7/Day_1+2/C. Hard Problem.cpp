#include<bits/stdc++.h>
using namespace std;
int main(){
  int q;
  cin >> q;
  while(q--)
  {
      int m,a,b,c;
      cin >> m >> a >> b >> c;
      int fst,snd;
      int total=0;
      if(m>a){
        total+=a;
        fst=m-a;
      }
      else {
        total+=m;
        fst=0;
      }
      if(m>b){
        total+=b;
        snd=m-b;
      }
      else {
        total+=m;
        snd=0;
      }
      int rem=fst+snd;
      if(c>=rem){
        total+=(rem);
      }else{
        total+=c;
      }
        cout << total <<'\n';

        }
  return 0;
}

