#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int n;
    cin >> n;
    vector<long long int>v(n);

    for(int i = 0 ; i < n ; i++) cin >> v[i];
    vector<long long int>pref1(n);

     pref1[0]=v[0];
     for(int i = 1 ; i < n ; i++)
     {
         pref1[i]=pref1[i-1]+v[i];
     }


     sort(v.begin(),v.end());


     vector<long long int>post(n);
      post [0]=v[0];
     for(int i = 1 ; i < n ; i++)
     {
         post[i]=post[i-1]+v[i];
     }


    long long int m;
    cin >> m;
    while(m--)
    {

        long long t,l,r;
        cin >>t >> l >> r;
        if(t==1)
        {
            if(l==1) cout<<pref1[r-1]<<endl;
            else cout << pref1[r-1]-pref1[l-2]<<endl;
        }else
        {

             if(l==1) cout<<post[r-1]<<endl;
            else cout << post[r-1]-post[l-2]<<endl;
        }

    }
    return 0;
}
