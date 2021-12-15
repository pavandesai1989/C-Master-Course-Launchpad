
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

void print(node* head)
{
    while(head!=nullptr)
    {
        cout<<head->data<<"-->";
        head = head->next;
    }
}

int main()
{
   node* head = nullptr;
   insertathead(head,1);
   insertathead(head,2);
   insertathead(head,3);
   insertathead(head,4);

   print(head);

}
