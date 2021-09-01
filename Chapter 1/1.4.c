/* computing and displaying the value of given data
x= a/(b-c)
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    float a,b,c,x;
    printf("Enter the value of a:\n");
    scanf("%f",&a);
    get_data:
    printf("Enter the value of b:\n");
    scanf("%f",&b);
    printf("Enter the value of c:\n");
    scanf("%f",&c);
    if((b-c) == 0 || (b-c)  < 0) 
    {
        printf("The operation of b-c must not be zero\nSo please guess the number greater than zero\n");
        goto get_data;
    }
    else{
    x = a/(b-c);
    printf("The value of x when a = %.2f,b = %.2f and c = %.2f is %.2f :",a,b,c,x);
    }
    return 0;
}