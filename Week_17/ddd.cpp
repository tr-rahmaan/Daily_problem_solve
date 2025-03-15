#include<bits/stdc++.h>
using namespace std;

int main()
{

 int t;
 cin >> t;
 while(t--)
 {
     int n,k,box=0;

     cin >> n >> k;
     vector <int>v(n);
     int cnt=0;

     for(int i = 0  ; i < n ; i++) cin >> v[i];


     int sum=0;

     for(int i = 0  ; i < n ; i++){


      if(v[i]>k){
        cnt=-1;
        break;
      }
       if(sum+v[i]>k){
           sum=0;
           cnt++;
         }

         sum=sum+v[i];
       }

    if (cnt != -1 && sum > 0) cnt++;


    if(cnt==-1) cout<<"-1"<<endl;

       else cout<<cnt <<endl;



 }
  return 0;
}
