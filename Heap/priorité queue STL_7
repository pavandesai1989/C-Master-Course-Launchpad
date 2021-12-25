Priority queues are a type of container adapters, specifically designed such that the first element of the queue is the greatest of all elements in the 
queue and elements are in nonincreasing order.
/********* Time complexity of all operations **********/
  push ----- o(log N)
  pop ------ o(log N)
  get min or max ---- o(1)
  
 /*************NOTE : By default, C++ creates a max-heap for priority queue***************/

#include<iostream>
#include<queue>
using namespace std;

int main()
{
   priority_queue<int> q;
   q.push(2);
   q.push(0);
   q.push(3);
   q.push(1);
   //print queue
   while(!q.empty())     // 3 2 1 0
   {
       cout<<q.top()<<" ";
       q.pop();
   }
   return  0;
} 

/*************HOW TO CREATE MIN HEAP?*************************/
priority_queue <int, vector<int>, greater<int>> g = gq; 
int main()
{
   priority_queue<int,vector<int>,greater<int>> q;
   q.push(2);
   q.push(0);
   q.push(3);
   q.push(1);
   //print queue
   while(!q.empty())     // 0 1 2 3 
   {
       cout<<q.top()<<" ";
       q.pop();
   }
   return  0;
}


   
