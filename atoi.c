#include <stdio.h>
int new_atoi(char* s)
{
	int result;
	for (int i=0; i < strlen(s); i++)
	{
		temp += (s[strlen(s) - (i + 1)] - '0') * 10^i;
	}
	printf("%d\n", temp);
	return temp;
}