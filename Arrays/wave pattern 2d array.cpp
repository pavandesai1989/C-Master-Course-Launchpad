 
#include <iostream>
using namespace std;


const int col=3;

void waveprint(int arr[][col],int row)
{
    for(int i=0;i<col;i++)
    {
        if(i%2 == 0)//even column
        {
            for(int j=0;j<row;j++)
            {
                cout<<arr[j][i]<<" ";
            }
        }
        else
        {
            for(int j=row-1;j>=0;j--)
            {
                cout<<arr[j][i]<<" ";
            }
        }
    }
}

int main() 
{
    int arr[2][3] = {
      { 1, 5, 4},
      { 15, 22, 45},
   };

    waveprint(arr,2);

	return 0;
}

