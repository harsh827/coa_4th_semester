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
#include<conio.h>
#include<stdio.h>




char carry, carry1, carry2 = 0;
char halfadd( char A, char B )
{
    carry = A & B;
    return A ^ B;
}

char fulladd( char A, char B, char C)
{
    carry1 = A & B;
    char i = A ^ B;
    char j = i & C;
    carry2 = carry1 | j;
    return i ^ C;
}

int main()
{
    //half_adder code
    int i=0,j=0,k=0,result1=0,result2=0;

    printf("half_adder\n");
    printf("A   B  |  S  Carry\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            result1=halfadd(i,j);
            printf("%d   %d  |  ",i,j);
            printf("%d   %d\n",result1,carry);
        }
    }
    printf("\n");

    //full_adder code
    printf("full_adder\n");
    printf("A   B   C  |  S  Carry\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
            result2=fulladd(i,j,k);
            printf("%d   %d   %d  |  ",i,j,k);
            printf("%d   %d\n",result2,carry2);
            }
        }
    }

    return 0;
}
