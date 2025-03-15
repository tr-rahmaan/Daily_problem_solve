#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    int newnum=0;
    if(newnum<10 && newnum!=0 )
    {

        return newnum
        ;
    }
   while(n>0){


    int lst=n%10;
    n=n/10;
    newnum+=lst;
   }
    sum(newnum);
}

int main()

{
   int t;
   cin >> t;
   while(t--)
   {
       int x;
       cin >> x;
       if(x==0) break;

       else cout<<sum(x)<<endl;
   }
    return 0;
}


