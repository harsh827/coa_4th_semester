#include <stdio.h>
#include <stdlib.h>

int main()
{ 	int a[5] = { 1, 0, 1, 0, 1 };
	int b[5] = { 0, 1, 1, 0, 0 };
	int i, nand_ans;

	for (i = 0; i < 5; i++)
    { 	nand_ans = !(a[i] * b[i]);
		printf("\n %d NAND %d = %d",a[i], b[i],nand_ans);
	}
}

