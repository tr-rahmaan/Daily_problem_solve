#include <bits/stdc++.h>
using namespace std;

int main() {
   int q;
   cin >> q;
   while(q--)
   {
       int n;
       cin >> n;
       int z=0,on=0;
       int cnt=0;
       string s,t;
       cin>> s>> t;
       for(int i=0;i<n ;i++){
           if(s[i]!=t[i]){
               cnt+=1;
           }
       }
       if(cnt%2==0) cout<<"YES"<<endl;
       else
       cout <<"NO"<<endl;


   }
}



