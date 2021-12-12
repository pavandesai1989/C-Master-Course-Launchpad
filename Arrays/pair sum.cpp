//bubble sort 
#include<iostream>
using namespace std;

void  pairsum(int arr[],int n,int sum)
{
    //use 2 pointers approach
    int i=0;
    int j=n-1;

    while(i<j)
    {
        if(arr[i] + arr[j] == sum )
        {
            cout<<i<<" "<<j<<endl;
            i++;
            j--;
        }
        else if (arr[i] + arr[j] > sum )
            j--;
        else
            i++;    
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    pairsum(arr,n,4);
    return 0;
}
