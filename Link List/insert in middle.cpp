#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;

public:
    node(int data):data(data),next(nullptr){

    }
};

void insertathead(node*& head,int data)
{
    if(!head)
    {
        head = new node(data);
        return;
    }
    else
    {
        node* n = new node(data);
        n->next = head;
        head = n;
    }
}

int length(node* head)
{
    int len=0;
    while(head!=nullptr)
    {
       len++;
       head = head->next;
    }
    return len;
}

void insertattail(node*& head,int data)
{
    node* temp=head;
    while(temp->next!=nullptr)  //imp
    {
        temp = temp->next;
    }
    if(temp)
       temp->next = new node(data);   

}

void insertinmiddle(node*& head,int data,int p)
{
    //insert at head
    if(!head || p==0)
    {
        insertathead(head,data);
        return;
    }
    if(p>length(head)) //insert at tail
    {
       insertattail(head,data);
    }
    else
    {
        int jumps=1;
        node* temp = head;
        while(jumps<=p-1)   //imp
        {
            temp = temp->next;
            jumps++;
        }
        //temp points to node after which we need to add data
        node* n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }
}

void print(node* head)
{
    while(head!=nullptr)
    {
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<endl;
}

int main()
{
   node* head = nullptr;
   insertathead(head,1);
   insertathead(head,2);
   insertathead(head,3);
   insertathead(head,4);

   print(head);

   insertattail(head,5);
     print(head);

     insertinmiddle(head,45,2);
       print(head);

}
