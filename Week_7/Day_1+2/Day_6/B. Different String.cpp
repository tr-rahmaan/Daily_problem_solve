#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
      string s,t;
      cin >> s;
      t=s;
      bool pel=false;
      bool same=true;
      for(int i =0;i<s.size()-1;i++)
        {
            if(s[i]!=s[i+1])
            {
                same=false;
                break;
            }
        }

      if(s.size()==1 || same)
      {
          cout<<"NO"<<'\n';
          continue;
      }
      reverse(s.begin(),s.end());
      if(s==t)
      {
           pel=true;

      }
      if(!pel)
      {
          cout<<"YES"<<'\n';
          cout<<t<<'\n';
      }
      else {

        cout<<s[0]<<s[s.size()-1];
        for(int i =1;i<s.size()-1;i++)
        {
            cout<<s[i];
        }
        cout<<'\n';
      }

    }
    return 0;
}

