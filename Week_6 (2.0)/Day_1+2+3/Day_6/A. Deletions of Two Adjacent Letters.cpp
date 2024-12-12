#include <bits/stdc++.h>
using namespace std;

int main() {
     int q;
     cin >> q;
     while(q--)
     {

         string s;
         char t;
         cin >> s;
         cin >> t;
         bool flag=false ;
         for(int i=0;i<s.size();i++)
         {
             if(s[i]==t){
                if((i+1)%2==1){
                    //    cout<<i<<endl;
                    flag=true;
                    break;
                }
             }
         }
         if(flag==true) cout <<"YES"<<endl;
         else cout << "NO"<< endl;     }

    return 0;
}

