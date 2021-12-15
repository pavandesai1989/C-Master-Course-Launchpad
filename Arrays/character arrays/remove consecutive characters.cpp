/*
Given a string S delete the characters which are appearing more than once consecutively.

*/

 
#include <iostream>
#include<cstring>
using namespace std;

void removedup(char ch[])
{
    int len = strlen(ch);

    for(int i=0;i<len;i++)
    {
        if(ch[i] == ch[i+1])
        {
            int j=i+1;
            while(ch[j]!='\0')
            {
                ch[j] = ch[j+1];
                j++;
            }
            len--;
        }
        ch[len] = '\0'; //imp
    }
}

int main() 
{
	char ch[] = "abbcdeeef";

    removedup(ch);
    cout<<ch<<endl;



	return 0;
}

