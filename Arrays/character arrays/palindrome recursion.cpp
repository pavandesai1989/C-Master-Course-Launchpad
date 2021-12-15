 
#include <iostream>
#include<cstring>
using namespace std;

bool ispalindrome( char a[],int i,int j)
{
    //base case 
    if(i > j)
       return false;

    if(a[i]!=a[j])
        return false;
    else
        return true;    

    return ispalindrome(a,i+1,j-1);       

}

int main() 
{
	char a[] = "abab";
	cout<<ispalindrome(a,0,strlen(a)-1)<<endl;

	return 0;
}

