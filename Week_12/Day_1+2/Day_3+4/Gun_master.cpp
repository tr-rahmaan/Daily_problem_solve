
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,d,cnt=0;
        cin >> n >> d;
        vector<int>v(n);
        for(int i = 0 ; i < n; i++)

        {
            cin >> v[i];

        }
         int i,j;
        for(i = 0 ; i < n; i++)

        {
           // cout<<"last cnt"<<v[i]<<" "<<"c"<<cnt<<endl;
          if(v[i]>d )
          {
              cnt++;
              for( j = i; j < n; j++)
              {
                  if(v[j]<=d)
                  {
                      //i=j;
                      break;
                  }
              }

              i=j-1;
              if(i!=n-1)cnt++;
            // cout<<"last i"<<" "<<i<<" "<<"c"<<cnt<<endl;
          }

        }

        cout << cnt << endl;
    }
    return 0;
}
