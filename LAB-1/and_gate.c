//
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<errno.h>
#include<time.h>
#include<assert.h>
#include<locale.h>
#include<setjmp.h>
#include<signal.h>
#include<stdarg.h>

int main()
{
	int a[5] = { 1, 0, 1, 0, 1 };
	int b[5] = { 0, 1, 1, 0, 0 };
	int i, and_ans;

	for (i = 0; i < 5; i++)
    {	and_ans = a[i] & b[i];
		printf("\n %d AND %d = %d",a[i], b[i], and_ans);
	}
}
