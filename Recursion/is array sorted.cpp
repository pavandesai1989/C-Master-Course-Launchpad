#include <iostream>
using namespace std;

bool issorted(int arr[],int n)
{
    //base case
    if( n==0 || n==1)
        return true;

    bool issmallersorted = issorted(arr+1,n-1);
    return ( issmallersorted == true && arr[0] < arr[1] );    
}


int main() 
{
    int arr[] = {1,2,3,54,5,6};
   cout<<issorted(arr,6);
}
