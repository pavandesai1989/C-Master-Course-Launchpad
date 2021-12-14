
//brute force 
#include <iostream>
using namespace std;
int main() 
{
    int arr[4] = {1,2,3,4};
    int n= sizeof(arr)/sizeof(int);

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl<<endl;
        }
    }

    return 0;
    
}

//find the maximum sub array sum and print the sub array
#include <iostream>
#include<climits>
using namespace std;
int main() 
{
    int arr[4] = {1,2,3};
    int n= sizeof(arr)/sizeof(int);

    int s=0;
    int e=0;
    
    int max_sum = INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum = 0;
            for(int k=i;k<=j;k++)
            {
                sum +=arr[k];
            }
            if(sum>max_sum)
            {
              max_sum = sum;
              s = i;
              e = j;
            }
        }
    }

    cout<<"maximum sum is "<<max_sum<<endl;
    cout<<"maximum sub array is "<<endl;

    for(int i=s;i<=e;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
    
}

