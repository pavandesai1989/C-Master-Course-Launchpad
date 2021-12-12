/*
 Given an array arr[] of n elements, write a function to search a given element x in arr[].
 return the index if element is found else return the -1
 */
#include<iostream>
using namespace std;

int linearsearch(int arr[],int n,int ele)
{
    if( n==0)
        return -1;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i] == ele)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,23,3,45,9};
    int n = sizeof(arr)/sizeof(int);
    
    cout<<"element found at "<<linearsearch(arr,n,263)<<endl;
    
    return 0;
}
x
