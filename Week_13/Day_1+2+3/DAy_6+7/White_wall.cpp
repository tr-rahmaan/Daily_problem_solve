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
        string s;
        cin >> s;
        string a="RGB",b="RBG",c="GRB",d="GBR",e="BRG",f="BGR";
           int cnt1=0;
           int cnt2=0;
           int cnt3=0;
           int cnt4=0;
           int cnt5=0;
           int cnt6=0;

           int j=0;


             for(int i=0;i < n;i++)
             {
                 if(s[i]!=a[j]){

                 cnt1++;

                 }
                  if(s[i]!=b[j]){

                 cnt2++;

                 }
                  if(s[i]!=c[j]){

                 cnt3++;

                 }
                  if(s[i]!=d[j]){

                 cnt4++;

                 }
                  if(s[i]!=e[j]){

                 cnt5++;

                 }
                  if(s[i]!=f[j]){

                 cnt6++;

                 }
                 j++;
                 if(j==3) j=0;
             }

             cout<<min({cnt1,cnt2,cnt3,cnt4,cnt5,cnt6})<<endl;
    }
    return 0;
}
