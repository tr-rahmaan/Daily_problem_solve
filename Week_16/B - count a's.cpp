#include <bits/stdc++.h>
using namespace std;

int main() {

   string s;
   cin >> s;
   vector<long long>prefix(s.size());

   if(s[0]=='a')
   {
       prefix[0]=1;
   }else{
    prefix[0]=0;

   }

   for(int i = 1 ; i < s.size() ; i++)
   {
       if(s[i]=='a') prefix[i]=prefix[i-1]+1;

       else prefix[i]=prefix[i-1];
   }
   int q;
   cin >> q;
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        if (l == 1) cout << prefix[r-1] << endl;
        else cout<<prefix[r-1]-prefix[l-2]<<endl;
    }
    return 0;
}


