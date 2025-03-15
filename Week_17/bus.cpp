#include<bits/stdc++.h>
using namespace std;


int main()
{

   int n,d,r;
   while(1)
   {
       cin >> n >> d >> r;
       if(n==0 && d==0 && r==0) break;

       int total=0;
       vector<int>mor(n),ev(n);
       for(int i = 0 ; i < n ; i++) cin >> mor[i];

        for(int i = 0 ; i < n ; i++) cin >> ev[i];

        sort(mor.begin(),mor.end());
        sort(ev.rbegin(),ev.rend());

        for(int i =0 ; i < n ; i++){
            //total+=abs(d-(mor[i]+ev[i]));
            int ext=(mor[i] + ev[i]) - d;
            if(ext>0) total+=ext;
        }

        cout << total*r<<endl;
   }
}


