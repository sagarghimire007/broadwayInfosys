#define rice 16.75
#define sugar 15.00
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    float a,b,c,d;
    printf("Enter the quantity of rice : " );
    scanf("%f",&a);
    printf("Enter the quantity of sugar : " );
    scanf("%f",&b);
    printf("\n");
    c = rice * a;
    d = sugar * b;
    printf("***List of Items***\n");
    printf("Rice\tRs %.2f\n",c);
    printf("Sugar\tRs %.2f",d);
    return 0;
}