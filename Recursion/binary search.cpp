#include <iostream>
using namespace std;

int  binarysearch(int* a,int s,int e,int key)
{
    //base case
    if( s>e)
       return -1;
    //recursive case
    int mid = (s+e)/2;

    if( a[mid] == key)   
      return mid;
    else if (key>a[mid]) //search in the first half of array 
    {
       return binarysearch(a,mid+1,e,key);
    } 
    else  //search in the second half of array
       return binarysearch(a,s,mid-1,key); 
}


int main() 
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    cout<<binarysearch(arr,0,n-1,5);
}
