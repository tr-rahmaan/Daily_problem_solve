#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--)
   {

       int n; bool f=false;
       //cin >> n;
      vector<char>v(6);
      for(int i=0;i<6;i++) cin >> v[i];
       for(int i=0;i<5;i++){
        if(v[i]=='W' && v[i+1]=='W' && v[i+2]=='W'){
           f=true;
           if(f) cout<<"YES"<<endl;
           break;
        }

       }

       if(!f) cout<<"NO"<<endl;
   }
    return 0;
}

