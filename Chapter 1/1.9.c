// Arithmetic Calculator
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int sum(float m, float n)
{
    float c = m+n;
    return c;
}
int diff(float m, float n)
{
    float c = m-n;
    return c;
}
int product(float m, float n)
{
    float c = m*n;
    return c;
}
int division(float m, float n)
{
    float c = m/n;
    return c;
}
int main()
{
    int a;
    char b;
    float x,y;
    operation_again:
    printf("Choose the number for arithmetic operation :\n");
    printf("1. Sum\n2. Difference\n3. Product\n4. Division\n");
    choose:
    printf("Choose one of them : ");
    scanf("%d",&a);
    printf("\n");
    if(a <=0 || a > 4)
    {
        printf("Please select one of the above\n Or if you want to exit Enter N : ");
        scanf("%s",&b);
        if(b == 'N')
            goto continues;
        goto choose;
    }
    else{
        printf("Enter the value of x : ");
        scanf("%f",&x);
        printf("Enter the value of y : ");
        scanf("%f",&y);
        if(a == 1){
        float s = sum(x,y);
        printf("The sum of %.2f + %.2f = %.2f\n",x,y,s);
    }
    else if(a==2){
        float s = diff(x,y);
            printf("The sum of %.2f - %.2f = %.2f\n",x,y,s);
    }
    else if(a==3){
        float s = product(x,y);
            printf("The sum of %.2f * %.2f = %.2f\n",x,y,s);
    }
    else{
        float s = division(x,y);
             printf("The sum of %.2f / %.2f = %.2f\n",x,y,s);
    }
    }
    printf("If you want to continue enter Y :");
    scanf("%s",&b);
    if(b == 'Y')
        goto operation_again;
            continues:
    return 0;
}
