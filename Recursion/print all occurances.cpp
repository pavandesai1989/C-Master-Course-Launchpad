#include <iostream>
using namespace std;

void  printalloccurances(int arr[],int n,int i, int key)
{
    //base case 
    if(i == n)
       return ;

    if( arr[i] == key) //i could be an answer 
       cout<<i<<" ";
    printalloccurances(arr,n,i+1,key); 
          
}


int main() 
{
    int arr[] = {1,3,4,2,5,3};
   printalloccurances(arr,6,0,3);
}
