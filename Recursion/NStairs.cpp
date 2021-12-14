#include <iostream>
#include<cstring>
using namespace std;
//number of ways child can reach top by taking maximum k steps at a time for n number of steps.
int Nstairs(int n,int k)
{
    //base case
    if(n==0)  
       return 1;
    //negative
    if(n<0)  
      return 0;
  
  int ans=0;

    for(int i=1;i<=k;i++)
      ans += Nstairs(n-i,k);
  
  return ans;
}

int main()
{
     cout<<Nstairs(3,3)<<endl;  //op is 4
}
