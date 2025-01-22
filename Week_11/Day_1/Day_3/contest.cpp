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
      char arr[n][4];
      vector<int>v;
      for(int i = 0;i < n;i++) {
        for( int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
      }
      for(int i = 0;i < n;i++) {
        for( int j = 0; j < 4; j++)
        {
           if(arr[i][j]=='#')
           {
               v.push_back(j);
               break;
           }
        }
      }

      reverse(v.begin(),v.end());
      for(int i = 0;i <v.size() ; i++)
      {
          if(i!=v.size()-1 ) cout <<v[i]+1<<" ";
          else cout << v[i]+1<< endl;
      }
  }
    return 0;
}


