#include <iostream>
#include<cstring>
using namespace std;
//number of ways child can reach top by taking maximum 3 steps at a time for n number of steps.
int stairs(int n)
{
    //base case
    if(n==0)  
       return 1;
    //negative
    if(n<0)  
      return 0;

    return stairs(n-1) +  stairs(n-2) + stairs(n-3);
}

int main()
{
     cout<<stairs(3)<<endl;  //op is 4
}
