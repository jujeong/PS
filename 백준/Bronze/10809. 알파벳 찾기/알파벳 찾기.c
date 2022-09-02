#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
int main()
{
	char string[200] = { 0, };
	int con = 0;
	scanf("%s", string);
	for (int i = 0; i < 26; i++)
	{
		con = 0;
		for (int j = 0; j < strlen(string); j++)
		{
			if (string[j] == ('a' + i))
			{
				con = 1;
				printf("%d ", j);
				break;
			}
		}
		if (con == 0)
		{
			printf("-1 ");
		}
	}
}