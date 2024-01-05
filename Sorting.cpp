#include<bits/stdc++.h>
using namespace std;
// void swaping(int n,int m)
// {
//     int temp;
//     temp = n;
//     n = m;
//     m = n;
//}
void sortingArray(int n, int arr[])
{
    
    for(int i = 0 ;i < n;i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];//tmep = b;b=a;a=temp
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0 ;i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sortingString(int n, string name[])
{
    
    for(int i = 0 ;i < n;i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(name[i]>name[j])
            {
                string temp = name[i];//tmep = b;b=a;a=temp
                name[i] = name[j];
                name[j] = temp;
            }
        }
    }
    for(int i = 0 ;i < n; i++)
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
    
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    string nam;
    string name[n];
    for(int i = 0; i < n ;i++)
    {
        cin>>nam;
        name[i] = nam;
    }
    sortingArray(n,arr);
    sortingString(n,name);
    return 0;
}