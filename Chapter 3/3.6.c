#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf(" S " );
        }
        printf("\n");
    }
    printf("\n");
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==1 || i==5)
            {
                printf(" S ");
            }
            else if(j==1||j==5)
            {
                printf(" S       ");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}