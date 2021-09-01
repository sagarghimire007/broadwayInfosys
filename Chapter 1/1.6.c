// Area of circle
// A = pi * r^2;
#define pi 3.14 // definining constant variable and cna be used every where in the program
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    float A,r;
    printf("Enter the value of radius : ");
    scanf("%f",&r);
    A = pi * pow(r,2);
    printf("The Area of circle is %.2f : ",A);
    return 0;
}