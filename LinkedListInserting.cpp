#include<bits/stdc++.h>
using namespace std;
typedef struct node *nodeptr;
struct node{
    int info;
    nodeptr next;
};
nodeptr newNode()
{

    nodeptr x =(struct node*)malloc(sizeof(struct node));
    return x;
}
void addlast(nodeptr *head, int value)
{

    nodeptr x = newNode();
    x->info = value;
    x->next = NULL;
    if(*head == NULL)
    {

        *head = x;
        return;
    }
    nodeptr ptr = *head;
    while(ptr->next != NULL)
    {

        ptr = ptr->next;
    }
    ptr->next = x ;
}
void addfirst(nodeptr *head,int value)
{
     nodeptr x = newNode();
    x->info = value;
    x->next = NULL;
    if(*head == NULL)
    {

        *head = x;
        return;
    }
    x->next = *head;
    *head = x;
    return;

}
int main()
{
    nodeptr start = NULL;
    int n,value;
    cout<<"taking input for given n number"<<endl;
    cin>>n;
    for(int i = 0;i<n;i++)
    {

        cin>>value;
        addlast(&start,value);
       // cout<<start->info<<endl;
    }
    int sum =0,count = 0;
   // addfirst(&start,2);
   // addfirst(&start,4);
    for(nodeptr i = start ; i!=NULL; i=i->next)
    {
        cout<<i->info<<" ";
        sum = sum + i->info;
        count++;

    }
    cout<<"Average"<<(sum*1.0/count)<<endl;
    return 0;
}
