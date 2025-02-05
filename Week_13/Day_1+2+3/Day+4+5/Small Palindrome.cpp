#include <bits/stdc++.h>
using namespace std;
 int main(){
   int t ;
   cin >> t;
   while(t--)
   {

       int n,y;
       cin >> n >> y;
       string s="",t;
       for(int i = 0 ; i < n/2; i++)
       {
          s+='1';
       }
       for(int i = 0 ; i < y/2; i++)
       {
          s+='2';
       }

       t=s;
       reverse(s.begin(),s.end());
       cout<<t+s<<endl;
   }
    return 0;
}

