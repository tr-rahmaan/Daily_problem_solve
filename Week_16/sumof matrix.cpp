#include<bits/stdc++.h>
using namespace std;

const int n=105;
int a[n][n],b[n][n];
int r,c;

void solve(int i,int j)
{
    if(i>=r){
        return;
    }

    if(j>=c){
        solve(i+1,0);
        return;
    }

    cout<<a[i][j]+b[i][j];
    if(j==c-1)
    {
        cout<<endl;
    }else{
      cout<<" ";
    }
    solve(i,j+1);
}

int main()
{
  //  int r,c;
    cin >> r >> c;
    for(int i = 0 ; i < r; i++)
    {
        for(int j=0;j<c;j++)
        {
            cin >>a[i][j];
        }
    }

     for(int i = 0 ; i < r; i++)
    {
        for(int j=0;j<c;j++)
        {
            cin >>b[i][j];
        }
    }
   solve(0,0);
    return 0;
}
