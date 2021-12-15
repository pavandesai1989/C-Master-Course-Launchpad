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

void deletehead(node*& head)
{
    if(!head)
       return;

    node* temp = head;
    head = head->next;
    delete temp;
}

void deleteattail(node*& head)
{
    if(!head)
       return;

    node* temp = head;
    node* prev = head;
    while(temp->next!=nullptr)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = nullptr; //imp step
}

void deleteinmiddle(node*& head,int p)
{
    if(!head)
       return;

    if(p==0)
    {
        deletehead(head);
    }   
    else if( p > length(head))
    {
        deleteattail(head);
    }
    else
    {
        int jumps=1;
        node* temp=head;
        node* prev = head;
        while(jumps<=p)
        {
            prev = temp;
            temp = temp->next;
            jumps++;
        }
        prev->next = temp->next;
        delete temp;
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

   deleteinmiddle(head,0);
    print(head);
}
