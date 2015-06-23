#include stdio.h

int strlen(char* s)
{
	int len;
	char c;
	for (int i = 0, c = s[i]; c != "\0"; i++)
	{
		len += i + 1;
	}
	return s;
}