#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a,b,c;
   while(1)
   {
       cin >> a >> b >> c;

       if(a==b && b==0 && c==0) break;
       if(c-b==b-a) cout<<"AP"<<" "<<c+(b-a)<<endl;
       else cout <<"GP"<<" "<<c*(b/a)<<endl;
   }
    return 0;
}

