
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[5] = { 1, 0, 1, 0, 1 };
	int b[5] = { 0, 1, 1, 0, 0 };
	int i, or_result;

	for (i = 0; i < 5; i++)
    { 	or_result = a[i] | b[i];
		printf("\n %d OR %d = %d",a[i], b[i],or_result);
	}
}

