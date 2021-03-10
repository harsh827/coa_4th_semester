#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[5] = { 1, 0, 1, 0, 1 };
	int b[5] = { 0, 1, 1, 0, 0 };
	int i, xnor_result;

	for (i = 0; i < 5; i++)
    { 	xnor_result = !(a[i] ^ b[i]);
		printf("\n %d XNOR %d = %d",a[i], b[i],xnor_result);
	}
}

