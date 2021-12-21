/*
Display the values of the inverted array in a space separated manner.
Sample Input
5
0 
2 
4 
1 
3
Sample Output
0 3 1 4 2


*/

//iterative function
 #include<iostream>
using namespace std;

/*void inverse(int arr[],int n,int temp[],int i)
{
	for(int i=0;i<n;i++)
    {
       int x = arr[i];
	   if(temp[x] == 0)
	   {
		temp[x] = i;
	   }
    }
     for(int i=0;i<n;i++)
      cout<<temp[i]<<" ";
}*/

int* inverse(int arr[],int n)
{
    int* inv = new int[n];

    for(int i=0;i<n;i++)
    {
        int pos = arr[i];
        inv[pos] = i;
    }

    return inv;
}

int main() 
{   int N;
    cin>>N;
    
	int* arr = new int[N];
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
	}
    
    int* inv = inverse(arr,N);

    for(int i=0;i<N;i++)
    {
        cout<<inv[i]<<" ";
    }

	delete[]arr;
	delete[]inv;

	return 0;
}
