#include <iostream>
#include<cstring>
using namespace std;

int stringtoint(char* pch,int n)
{
    //base case
    if(n==0)
       return 0;

    //get the last digit
    int digit = pch[n-1] - '0';

    int smallans = stringtoint(pch,n-1);
    return smallans*10 + digit;
}
int main()
{
    char ch[] = "100";
    int n = strlen(ch);

    cout<<stringtoint(ch,n)<<endl;

    cout<<stringtoint(ch,n)+1<<endl; //to verify adding 1 to ans

}

