#include <iostream>
using namespace std;

int fib(int n)
{
    //base case 
    if( n==0) 
        return 1;
    //recursive case
    int smallans =  fib(n-1);

    //calculate ans
    int ans = n * smallans;

    return ans;   
}
int main() 
{
   cout<<fib(4)<<endl;
}
