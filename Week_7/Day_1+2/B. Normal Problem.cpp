#include<bits/stdc++.h>
using namespace std;
int main(){
  int q;
  cin >> q;
  while(q--)
  {
      string s;
      cin >> s;
      for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='q')cout<<'p';
        else if(s[i]=='p') cout <<'q';
        else cout << s[i];
      }
      cout <<'\n';

        }
  return 0;
}
