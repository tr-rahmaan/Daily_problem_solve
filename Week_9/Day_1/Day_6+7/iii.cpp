#include<bits/stdc++.h>
using namespace std;
int main()
{

    int q;
    cin >>q;
    while(q--)
    {
      int s1,s2,s3,s4,a,b;
      cin >> s1 >> s2>> s3>> s4;
      if(s1>s2) a= s1;
      else a=s2;
      if(s3>s4) b= s3;
      else b=s4;

      if(a==s1 && b==s3 && a>s4 && b>s2) cout <<"YES"<<endl;


      else if(a==s2 && b==s3  && a>s4 && b>s1 ) cout <<"YES"<<endl;


      else if(a==s1 && b==s4  && a>s3 &&  b>s2) cout <<"YES"<<endl;


      else if (a==s2 && b==s4  && a>s3 && b>s1) cout <<"YES"<<endl;


      else cout <<"NO"<<endl;


    }
}

