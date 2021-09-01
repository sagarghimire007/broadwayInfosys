// relationship between ccelccius and fahrenheit
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    float C,F;
    char a;
    printf("For temperature in Fahrenheit then enter F, If in Celcius then enter C :\n");
    scanf("%c",&a);
    switch(a){
        case 'F' :
        {
            printf("Enter the value for temperature in Celcius : ");
            scanf("%f",&C);\
            F = (9*C)/5 + 32;
            printf("The temperature of Celcius = %.2f in Fahrenheit is : %.2f",C,F);
            break;
        }
        case 'C' :
        {
             printf("Enter the value for temperature in Fahrenheit : ");
            scanf("%f",&F);\
            C = ((F+5)-32)/9;
            printf("The temperature of Fahrenheit = %.2f in Celcius is : %.2f",F,C);
            break;
        }
        default :
            break;
    }
    return 0;
}