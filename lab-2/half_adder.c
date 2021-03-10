#include<time.h>
#include<assert.h>
#include<locale.h>
#include<setjmp.h>
#include<signal.h>
#include<stdarg.h>
#include<conio.h>
#include<stdio.h>


/*
typedef char bit;
bit carry=0;
bit half_adder(bit a,bit b)
    {
        carry=a&b;
        return a ^ b;
    }
*/

int main()
{

    int i=0,j=0,result=0,carry=0;

    printf("half_adder\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result = i ^ j;
            carry = i * j;
            printf("A=%d   B=%d   sum=%d   carry=%d\n",i,j,result,carry);
        }
    }





    return 0;
}
