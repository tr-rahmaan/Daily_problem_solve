#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    char arr[n][n];
    char brr[n][n];
    for(int i = 0;i< n;i++){

        for(int j = 0 ;j< n;j++){
            cin >> arr[i][j];
        }
    }
      for(int i = 0;i< n;i++){

        for(int j = 0 ;j< n;j++){
            cin >> brr[i][j];
        }
    }
    int h,k;
    bool ok=false;

     for(int i = 0;i< n;i++){

        for(int j = 0 ;j< n;j++){
           if(arr[i][j]!=brr[i][j])
           {

               h=i,k=j;
               break;
               ok=true;
           }
        }
        if(ok)break;
    }

     cout <<h+1<<" "<<k+1<<'\n';
     return 0;
    }



