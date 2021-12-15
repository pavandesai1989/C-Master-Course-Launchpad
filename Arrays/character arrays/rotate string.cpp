 
#include <iostream>
#include<cstring>
using namespace std;

void rotatestring(char a[],int n)
{
    int len = strlen(a);
    int i = len-1;

    while(i>=0)
    {
        a[i+n] = a[i];
        i--;
    }
    i=0;
    int j=len;

    while(i<n)
    {
        a[i++] = a[j++];
    }
    a[len] = '\0';

}

int main() 
{
	char ch[] = "hello";

    rotatestring(ch,3);

    cout<<ch<<endl;



	return 0;
}

