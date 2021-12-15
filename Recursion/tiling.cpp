/*
 Given a wall of size n*4 find number of ways by which we can add tiles of size (1*4 ) or (4*1)
*/


#include <iostream>
using namespace std;

int ways(int n)
{
	if(n<=3)
	   return 1;

	return ways(n-1) + ways(n-3);   
}

int main() 
{
	cout<<ways(4)<<endl;
	return 0;
}

