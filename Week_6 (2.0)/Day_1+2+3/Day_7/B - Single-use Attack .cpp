#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int q;
    cin >> q;
    while(q--) {
     int h,x,y;
     cin >> h >> x >> y;
     int ans=0;
     h=h-y;
     ans+=1;
     //if(h<=0) {
         //   cout<<"1"<<endl;
          //  continue;
     //}//else
     //{
         if(h%x!=0 ){
            ans=ans+(h/x)+1;
         }else{
             ans=ans+(h/x);
         }
     //}

     cout << ans << endl;
    }
            return 0;
}

