#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int q;
     cin >> q;
     while(q--)
     {
         int n;

         cin >> n;

         if(n%2==1){
            cout<<"NO"<<endl;
            continue;
         }
         cout <<"YES"<<endl;
         int a=65;
         for(int i=0;i<n/2;i++)
         {
             for(int j=0;j<3;j++){
                cout<<char(a);
             }
             a++;
         }
         cout <<endl;
     }

    return 0;
}
