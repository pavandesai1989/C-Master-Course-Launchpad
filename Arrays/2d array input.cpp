#include <iostream>
#include<cstring>
using namespace std;
//2d array take input.
int main()
{
  int arr[100][100];
  int rows;
  int col;

  cin>>rows;
  cin>>col;

  for(int i=0;i<rows;i++)
  {
      for(int j=0;j<col;j++)
      {
          cin>>arr[i][j];
      }
  }

  //print 2d array
  for(int i=0;i<rows;i++)
  {
      for(int j=0;j<col;j++)
      {
          cout<<arr[i][j]<<" ";
      }
      cout<<endl;
  }
}
