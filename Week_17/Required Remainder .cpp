#include<bits/stdc++.h>
using namespace std;


int main()
{
  int t;
  cin >> t;

  while(t--)
  {
      int a,b,c;
      cin >> a >> b >>c;
      int dv=c/a;
      if((dv*a)+b<=c)cout<<(dv*a)+b<<endl;
      else cout<<((dv*a)+b)-a<<endl;
  }
   return 0;
}



