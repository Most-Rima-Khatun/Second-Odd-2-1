#include<bits/stdc++.h>
using namespace std;
int a[10][10][10];
 int multi(int am[10][10])
 {
     for(int p=1;p<=4;p++)
     {
         for(int i=1;i<=4;i++)
        {

            for(int j=1;j<=4;j++)
            {

                a[p][i][j]=am[i][j]*am[i][j]+am[i][j]*am[i][j];
            }
        }

     }
     for(auto &e:a)
     {
         return e;
     }

 }
int main()
{
    int n;
    cin>>n;
    int am[n][n];
        for(int i=1;i<=4;i++)
        {

            for(int j=1;j<=4;j++)
            {

                cin>>am[i][j];
            }
        }


    for(int p = 2;p<=4;p++)
    {

        for(int i=1;i<=4;i++)
        {

            for(int j = 1;j<=4;j++)
            {
                //a[p-1][i][j] = multi(am);
               // a[p-1][i][j] = am[i][j];
               // cout<<a[p-1][i][j]<<" ";
                int temp =0;
                for(int k=i;k<=4;k++)
                {
                    temp= temp + a[p-1][i][k]*a[p-1][k][j];
                    //a[p][i][j]=a[p-1][i][j]+a[p-1][i][k]*a[p-1][k][j];

                }
                 a[p][i][j]=temp;
                 cout<<temp<<" ";            }
        }
    }
    for(int p=1;p<=4;p++)
     {
         cout<<p<<endl;
         for(int i=1;i<=4;i++)
        {

            for(int j=1;j<=4;j++)
            {

                cout<<a[p][i][j]<<" ";
            }
            cout<<endl;
        }


     }
    return 0;
}
/*1 0 1 0
 0 1 0 1
 1 0 1 0
 0 1 0 1

*/
