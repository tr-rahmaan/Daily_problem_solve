#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
       string s;
       cin >> s;
       bool ok=true;
       int l = 0 , r=s.size()-1;
       while(l<r)
       {
           if(s[l]!=s[r]) {
            ok=false;
            break;
           }
           l++;
           r--;
       }
       if(ok) cout <<"Yes"<<endl;
       else cout <<"No"<<endl;
   }


    return 0;
}



