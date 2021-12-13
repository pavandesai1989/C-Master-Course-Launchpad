#include <iostream>
using namespace std;

string arr[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void tostring(int n)
{
    //base case
    if(n==0)
       return;

    //recusrive call
    int digit = n%10;
    tostring(n/10);
    cout<<arr[digit]<<" ";
}
int main()
{
    tostring(1010);
}

