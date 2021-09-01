//modifying the value of variables

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    float x1,x,y,z;
    printf("Enter the value of x : ");
    scanf("%f",&x1);
    printf("Enter the value of y : ");
    scanf("%f",&y);
    printf("Enter the value of z : ");
    scanf("%f",&z);
    x = y;
    y = z;
    z = x1;
    printf("Now the x has the value of y, y has the value of z and z has the value of x\n");
    printf("Value of x = %.2f,Value of y = %.2f,Value of z = %.2f,",x,y,z);
    return 0;
}