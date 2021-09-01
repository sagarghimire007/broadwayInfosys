//pattern printing
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}