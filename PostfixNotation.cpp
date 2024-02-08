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
void push(char n)
{

    if(!isFull())
    {

        top++;
        stck[top] = n;
        //cout<<"push"<<stck[top]<<endl;
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

        char temp = stck[top];
      //  cout<<"pop"<<stck[top]<<endl;
        top--;

        return temp;
    }
    cout<<"Stack Empty"<< endl;
    return -1;
}
int precedence_oprt(char x)
{

    if(x == '(')
    {
        return 0;
    }
    else if(x=='+'|| x=='-')
    {

        return 1;
    }
    else if(x=='*' || x == '/')
    {
        return 2;
    }
    else
    {

        return 3;
    }
}

int main()
{
    int n;
    cin>>n;
    string infix ;
    cin>>infix;
    char oprt;
    int l  = infix.length();
    for(int i = 0; i != l;i++)
    {

        oprt = infix[i];
        if(oprt >='A' && oprt <= 'Z')
        {
            cout<<oprt;
        }
        else
        {
            char top_stck = stck[top];
            bool preTest = precedence_oprt(top_stck)>precedence_oprt(oprt)&& oprt!='(';
            if(oprt == ')')
            {

                while(stck[top]!='(')
                {
                    cout<<pop();
                }
                pop();
            }
            else if(preTest)
            {
               cout<<pop();
               push(oprt);
            }
            else
            {
                push(oprt);
            }
        }
    }


    return 0;
}
