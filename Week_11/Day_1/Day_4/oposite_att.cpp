#include<bits/stdc++.h>
using namespace std;

int main()
{
     int t;
      cin >> t;
      while(t--)
      {
          int n;
          cin >> n;
          string s,t="";
          cin >>s;
          for(int i = 0;i<s.size() ;i++)
          {
              if(s[i]=='0')t+='1';
              else t+='0';
          }

          cout <<t<< endl;
      }

    return 0;
}
