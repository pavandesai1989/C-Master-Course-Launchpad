#include <iostream>
using namespace std;

void printascending(int n)
{
    //base case 
    if( n==0 )
        return;

    //recursive call
    printascending(n-1);

    cout<<n<<endl;
}


int main() 
{
   printascending(7);
}
