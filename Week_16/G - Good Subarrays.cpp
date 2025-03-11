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
        vector<int>v(n);

        for(int i = 0 ; i < n ; i++) cin >> v[i];
        int cnt=0;
        for(int l = 0 ; l < n ; l++)
        {
            int sum=0;
            for(int r=l; r< n ; r++ )
            {
                for(int i =l;i<=r;i++)
                {
                  sum+=v[i]  ;
                }
                if(sum==(r-l+1)) cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
