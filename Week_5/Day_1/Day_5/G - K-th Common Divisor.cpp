#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,k;
     vector<int>d;
      cin >> a>> b>> k;
      int m=min(a,b);
      for(int i=1;i<=m;i++ ){
        if(a%i==0 && b%i==0){
            d.push_back(i);
        }
      }

     sort(d.rbegin(),d.rend());
    //for(auto u:d) cout <<u<<" ";

      cout << d[k-1] << endl;


    return 0;
}
