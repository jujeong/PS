#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	long long a = 0, b = 0, v = 0, x = 0, c = 0;
	scanf("%lld %lld %lld", &a, &b, &v);
	x = a - b;
	c = (v - a) / x;
	if (c * x == v - a)
		printf("%d", c + 1);
	else
		printf("%d", c + 2);
	return 0;
}