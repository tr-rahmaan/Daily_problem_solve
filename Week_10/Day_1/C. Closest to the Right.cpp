#include<bits/stdc++.h>
using namespace std;

int main()
{

  int q;
  cin >> q;
  while(q--)
  {
       int n;
       cin >> n;
       vector<int>v(n);
       for(int i = 0;i< n;i++) cin >> v[i];
       int total =0;
       for(int i = 0;i< n;i++)
       {
           total=total+(v[i]/2)+(v[i]%2);
       }
      cout << total << endl;

  }
    return 0;
}



