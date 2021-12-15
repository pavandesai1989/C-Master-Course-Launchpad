 
#include <iostream>
#include<cstring>
using namespace std;

int main() 
{
	char a[1000];
    char largest[1000];
    int largest_len = 0;

    int n;
    cin>>n;  //num of strings

    cin.get(); ////imp

    for(int i=0;i<n;i++)
    {
        cin.getline(a,1000);
        int len = strlen(a);

        if(len > largest_len)
        {
            largest_len = len;
            strcpy(largest,a);
        }

    }

    cout<<largest<<endl;


	return 0;
}

