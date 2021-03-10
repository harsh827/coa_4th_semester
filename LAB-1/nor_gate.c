#include <stdio.h>
#include <stdlib.h>

int main()
{ 	int a[5] = { 1, 0, 1, 0, 1 };
	int b[5] = { 0, 1, 1, 0, 0 };
	int i, nor_ans;

	for (i = 0; i < 5; i++)
    {	nor_ans = !(a[i] + b[i]);
		printf("\n %d NOR %d = %d",a[i], b[i], nor_ans);
	}
}

