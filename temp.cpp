#include<bits/stdc++.h>
using namespace std;
//stack
//main()//user input
//turn into this equation in postfix notation;
//solve this postfix
//return answer;
int const MAX = 100;
int stck[MAX];
int top = -1;
int isFull()
{

    if(top == MAX)
        return 1;
    else
        return 0;
}
int isEmpty()
{

    if(top == -1)
    {

        return 1;
    }
    else
        return 0;
}
void push(int n)
{

    if(!isFull())
    {

        top++;
        stck[top] = n;
        cout<<"push"<<stck[top]<<endl;
    }
    else
    {

        cout<<"Stack Full"<<endl;
    }
}
int  pop()
{

    if(isEmpty)
    {

        int temp = stck[top];
        cout<<"pop"<<stck[top]<<endl;
        top--;

        return temp;
    }
    cout<<"Stack Empty"<< endl;
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    // push(n);element push in stack
    for(int i =0;i <n;i++)
    {

        cin>>arr[i];
        push(arr[i]);

    }
     pop();
     pop();



    return 0;
}
