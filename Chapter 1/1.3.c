// multiplication table of 5
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    int a = 5,i = 1;
    while(i <= 10)
    {
        printf("%d * %d = %d\n",a,i,a*i);
        i++;
    }
    printf("End of Multiplication Table");
    return 0;
}