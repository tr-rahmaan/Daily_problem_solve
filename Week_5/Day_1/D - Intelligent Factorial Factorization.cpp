#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
      cin >> n;
      set<int>p;
      bool flag=true;
      for(int i=2;i<=100;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=false;
                break;
            }
        }
        p.insert(i);
      }
      int j=1;
      while( n--)
      {
          int x;
           cin >> x;
           int cnt=0;
           for(int i=2;i<=x;i++){
            if(p.find()==i){
                while(x<i){
                    x=x/i;
                    cnt++;

                }
            }
           }

           cout << "Case "<<"j"<<" "<<x<< " "<<"("<<cnt

      }
    return 0;
}
