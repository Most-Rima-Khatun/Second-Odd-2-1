#include<bits/stdc++.h>
using namespace std ;
void deleteString(int n, string name[])
{
    int position = 2;
    for(int i = position;i < n-1;i++)
    {
        name[i] = name[i+1];
        //cout << name[i]<<" " ;
    }
    n = n-1;
    for(int i = 0 ;i < n ; i++ )
    {
        cout << name[i]<<" " ;
    }
    cout<<endl;

}
int main()
{
    int n;
    cin>>n;
    
    string nam;
    string name[n];
    for(int i = 0; i < n ;i++)
    {
        cin>>nam;
        name[i] = nam;
    }
    deleteString(n,name);
    return 0;
}