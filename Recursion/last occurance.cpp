#include <iostream>
using namespace std;

int  lastoccurance(int arr[],int n,int i, int key)
{
    //base case 
    if(i == n)
       return -1;

    if( arr[i] == key) //i could be an answer 
    {
        int bigidx = lastoccurance(arr,n,i+1,key);
        if(bigidx!= -1)
           return bigidx;
        else
           return i;   
    } 

    return   lastoccurance(arr,n,i+1,key);          
}


int main() 
{
    int arr[] = {1,3,4,2,5,3};
   cout<<lastoccurance(arr,6,0,1);
}
