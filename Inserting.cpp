#include<bits/stdc++.h>
using namespace std;
void insertNumber(int n , int arr[])
{
    arr[n-1] = 54;
    for(int i = 0 ; i < n; i++)
    {
       cout<<arr[i]<<endl;
    }
}
void insertNumPosition(int n, int arr[])
{
   
    int position = 5;
    for(int i = n; i > 0; i--)
    {
        if(i >= position)
        {
            arr[i+1] = arr[i];
        }
    }
    arr[position] = 99;
    n = n+1;
    for(int i = 0; i< n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertString(int n,string name[])
{
   
   
    name[n-1] = "Rahim" ;
    for(int  i = 0 ; i < n; i++)
    {
        cout<<name[i]<<" ";
    }
    cout<<endl;
} 
void insertStringPosition(int n,string name[])
{
   
    int position = 5;
    
    for(int  i = n-1 ; i > 0; i--)
    {
        if(i >= position)
        {
            name[i+1] = name[i];
            cout<<name[i]<<" test";
        }
    }
    name[position] = "Kahim" ;
    n = n + 1;
    for(int i = 0; i < n; i++)
    {
        cout<<name[i]<<" ";
    }
    cout<<endl;
} 

int main()
{
    int n;
    cin>>n;
    int arr[n];
    string name[n];
     string nam;
    for(int  i = 0 ; i < n-1; i++)
    {
        cin>>nam;
        name[i] = nam;
    }
     for(int  i = 0 ; i < n-1; i++)
    {
        cin>>arr[i];
    }
    insertNumber(n,arr);//simply insert
    insertNumPosition(n,arr);//exact position insert
    insertString(n,name);//name insert
    insertStringPosition(n,name);//name insert exact position
    return 0;
}