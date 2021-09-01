#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int a[5],max,min;
    printf("Enter the number of arrays :\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0];
    min = max;
    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    printf("Max number in a array is %d",max);
    printf("\nMin nuber in a array is %d",min);
return 0;
}