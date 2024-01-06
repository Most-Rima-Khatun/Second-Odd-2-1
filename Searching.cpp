#include<bits/stdc++.h>
using namespace std;
int linearSearch(int n,int arr[],int key)
{
    for(int i = 0; i< n ;i++)
    {
        if(arr[i] == key)
        {
            return arr[i];
        }
    }
    return -1;
}
int binarySearch(int n,int arr[],int key)
{
    int beg,end,mid;
    beg = 0;
    end = n;
    for(;beg<=end;)
    {
        mid = (beg+end)/2;
        if(arr[mid] == key)
        {
            return arr[mid];
        }
        else if(arr[mid]>key)
        {
            end = mid -1;
            mid = (beg+end)/2;
        }
        else 
        {
            beg = mid + 1;
            mid = (beg + end)/2;
        }
    }
    return -1;
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
    int key;
    cin>>key;
    cout<<linearSearch(n,arr,key)<<endl;
    cout<<binarySearch(n,arr,key)<<endl;
    return 0;
}