
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
       sort(v.rbegin(),v.rend());
       long long int total =0;
       for(int i = 0;i< n-1;i++)
       {
          total=total+(long long)(v[i]+v[i+1]);
       }
      cout << total << endl;

  }
    return 0;
}


