#include<bits/stdc++.h>
using namespace std;

void digit(int n)
{
    if(n==0) {
            return ;
    }
     int lst=n%10;
    int num=n/10;
    digit(num);
    cout<<lst<<" ";
   // cout<<endl;
}


int main()

{
   int t;
   cin >> t;
   while(t--)
   {
   int a;
   cin >> a;
   if(a==0)
   {
       cout<<"0"<<endl;

   }else{
   digit(a);

   cout<<endl;
   }
   }
    return 0;
}

