#include <iostream>
using namespace std;

int  firstoccuranceiterator(int arr[],int n,int i, int key)
{
    if(i==n)
        return -1;

    if( arr[i] == key)
       return i;

    //recursive call 
    return firstoccuranceiterator(arr,n,i+1,key);             
}


int main() 
{
    int arr[] = {1,3,3,2,5,2};
   cout<<firstoccuranceiterator(arr,6,0,3);
}
