//dividing two float numbers
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    float a,b,c;
    printf("Entere the value of a :");
    scanf("%f",&a);
    printf("Entere the value of b :");
    scanf("%f",&b);
    c= a/b;
    printf("The result value of %f/%f = %.2f",a,b,c);
    return 0;
}