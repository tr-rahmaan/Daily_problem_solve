#include<bits/stdc++.h>
using namespace std;
int main()
{

   string s;
   cin >> s;
   int n=s.size();
   int m;
   cin >> m;
   vector<int>pref(n,0);
   pref[0]=0;
   for(int i=1;i <n ; i++)
   {
      if (s[i]==s[i-1])pref[i]=pref[i-1]+1;
      else pref[i]=pref[i-1];
   }
   while(m--)
   {
       int l,r;
       cin >> l >> r;
       l--;r--;
       if(l==0) cout<<pref[r]<<endl;
       else
       cout<<pref[r]-pref[l]<<endl;
   }
    return 0;
}

