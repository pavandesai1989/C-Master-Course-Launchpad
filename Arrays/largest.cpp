#include<iostream>
using namespace std;

int largest(int arr[],int n)
{
    //assume first ele as the largest 
    int res = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>res)
        {
            res = arr[i];
        }
    }
     return res;
}

int main()
{
    int arr[] = {1,23,3,45,9};
    int n = sizeof(arr)/sizeof(int);
    cout<<"largest ele is "<<largest(arr,n)<<endl;
    return 0;
}
