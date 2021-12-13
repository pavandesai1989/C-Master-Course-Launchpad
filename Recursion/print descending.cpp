#include <iostream>
using namespace std;

void printdescending(int n)
{
    //base case 
    if( n==0 )
        return;

    cout<<n<<endl;

    //recursive call
    printdescending(n-1);
}


int main() 
{
   printdescending(7);
}
