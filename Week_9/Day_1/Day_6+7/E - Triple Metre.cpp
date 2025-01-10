#include<bits/stdc++.h>
using namespace std;
int main()
{

     string s="oxx",t="",f;

     for(int i =0;i<=10;i++) t+=s;
     //cout<<t<<endl;
     cin >> f;
     bool fund= true;
     int i;
     if(f[0]=='o')i=0;
     else if(f[0]=='x' && f[1]=='o') i=2;
          else i =1;
     for(int j=0;j<f.size();j++)
     {
         if(f[j]!=t[i]){
            fund=false;
            break;
         }else i++;
     }
     if(fund) cout <<"Yes"<<'\n';
     else cout <<"No"<<'\n';
     return 0;
    }





