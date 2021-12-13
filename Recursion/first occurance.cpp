#include <iostream>
using namespace std;

int  firstoccurance(int arr[],int n,int key)
{
    if(n==0)
        return -1;

    if( arr[0] == key)
       return 0;

    //recursive call 
    int smallans = firstoccurance(arr+1,n-1,key);

    if(smallans!=-1)
       return smallans+1;
    else
       return -1;
              
}


int main() 
{
    int arr[] = {1,25,3,2,5,2};
   cout<<firstoccurance(arr,6,2);
}
