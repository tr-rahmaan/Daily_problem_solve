

#include<bits/stdc++.h>
using namespace std;

int main()
{
     string s;
     cin >> s;
     int siz=1,cur=1;
     for(int i = 0 ; i < s.size()-1 ; i++)
     {
         //cur++;
         if(s[i]==s[i+1])
         {
            // siz=max(siz,cur);
             cur++;
         }else{
           siz=max(siz,cur);
           cur=1;
         }
     }
     cout<<siz<<endl;
    return 0;
}


