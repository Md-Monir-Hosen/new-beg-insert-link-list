#include <iostream>
#include <cstdlib>
using namespace std;
void beginsert(int);
struct node
{
    int data;
    struct node*next;
};
struct node *head;
void beginsert(int item)
{
    struct node *newnode = new node;
    if(newnode==NULL)
    {
        cout<<"\nOverflow";
    }
    else
    {
        newnode->data=item;
        newnode->next=head;
        head=newnode;
        cout<<"\n newnode inserted";
    }
}
int main()
{
    int choice,item;
    do
    {
        cout<<"\nenter your item";
        cin>>item;
        beginsert(item);
        cout<<"\npress 0 to enter one more item";
        cin>>choice;
    }
    while(choice==0);
        return 0;
}
