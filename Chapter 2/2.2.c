// enter the value in rupee and convert yo paisa
#define paisa 100
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    float a,b;
    printf("Enter the price of an item in dewdimal form : ");
    scanf("%f",&a);
    //conversion to paisa
    b = paisa * a;
    printf("The amount in paisa is %.2f",b);
    return 0;
}