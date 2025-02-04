#include<bits/stdc++.h>
using namespace std;

int main()
{
     int t;
     cin >> t;
     while(t--)
     {

         int n;cin >> n;
         int ar=0;
         for(int i = 1;i<=n/2;i++)
         {
             int b=(n/2)-i;
             int arr=b*i;
             ar=max(ar,arr);

         }

         cout<<ar<<endl;
     }

    return 0;
}

