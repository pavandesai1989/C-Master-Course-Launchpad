#include <iostream>
#include<cstring>
using namespace std;

void replacepi(char input[])
{
	//base case
	if (input[0] == '\0')
		return;
	if (input[0] == 'p' && input[1] == 'i')
	{
		int len = strlen(input);
		int i = len;

		for (i; i > 0; i--)
		{
			input[i + 2] = input[i];
		}

		input[len + 3] = '\0';//vvvvimp
		//add 3.14
		input[0] = '3';
		input[1] = '.';
		input[2] = '1';
		input[3] = '4';

		replacepi(input + 4);

	}
	else
		replacepi(input + 1);

}
