#include <iostream>

using namespace std;

class node
{
public :
  int data;
  node* next;
};

class linked_list
{
public:
  node* head, *tail;
  int size = 0;

public:
  linked_list()
  {
    head = NULL;
    tail = NULL;
  }

  void addLast(int n)
  {
    // Write your code here
    

  }
  void display() 
  {
    for (node* tmp = head; tmp != NULL; tmp = tmp->next) 
    {
      cout << tmp->data << " ";
    }

  }


  void testList() {
    for (node* temp = head; temp != NULL; temp = temp->next) {
      cout << temp->data << endl;
    }
    cout<<size<< endl;

    if (size > 0) {
      cout <<tail->data << endl;
    }
  }
};
