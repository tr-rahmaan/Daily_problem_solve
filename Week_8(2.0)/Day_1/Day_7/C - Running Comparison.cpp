#include<bits/stdc++.h>
using namespace std;
int main() {

   int q;
   cin >> q;

   while(q--)
   {
       int n;
       cin >> n;
       vector<int>a(n);
       vector<int>b(n);
       for(int i = 0;i<n;i++)
       {
           cin >> a[i];
       }
       for(int i = 0;i<n;i++)
       {
           cin >> b[i];
       }
         int cnt =0;
        bool flag ;
       for(int i = 0;i<n;i++)
       {
           if(a[i]>b[i]*2 || b[i]>a[i]*2) flag= false;
          else flag = true;
          if(flag) cnt +=1;
       }

       cout << cnt << '\n';


   }

	return 0;
}

