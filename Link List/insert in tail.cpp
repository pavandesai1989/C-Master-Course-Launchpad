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
   insertattail(head,1);
   insertattail(head,2);
   insertattail(head,3);
   insertattail(head,4);

   print(head);
}
