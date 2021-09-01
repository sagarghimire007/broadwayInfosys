//area and perimeter of rectangle

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    float A,P,length,width;
    printf("Enter the length of rectangle : ");
    scanf("%f",&length);
    printf("Enter the width of rectangle : ");
    scanf("%f",&width);
    A =  length * width;
    P = 2 *(length + width);
    printf("\n");
    printf("Area of rectangle : %.2f\n",A);
    printf("Perimeter of rectangle : %.2f",P);
    return 0;
}