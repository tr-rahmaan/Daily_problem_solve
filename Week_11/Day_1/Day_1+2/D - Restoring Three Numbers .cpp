#include<bits/stdc++.h >
using namespace std ;
int main()
{
    int a,b,c;
    vector<int>v(4);
    for(int i = 0 ;i < 4 ; i ++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
   //for(auto u:v) cout << u << endl;
  c=v[3]-v[0];
  b=v[3]-v[1];
  a=v[3]-v[2];
  cout << a <<" "<< b <<" "<< c<< endl;
    return 0;
}
