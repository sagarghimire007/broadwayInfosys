// even number from 1 to 100
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    for(int i=1; i<=100; i++)
    {
        if(i%2==0)// gives the remainder if the value of i is divided by 2 then its a even number
        {
            printf("%d ",i);
        }
    }
    return 0;
}