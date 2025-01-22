#include<bits/stdc++.h>
using namespace std;
int main()
{


   int a , b,cnt =0;int total=1;
   cin >> a >> b;
  // if(a%b ==0) cout <<"1"<<endl;
   //else{
    while(total<=b){
      total+=a;
      cnt++;
    }
   cout << cnt << endl;
    return 0;
}

