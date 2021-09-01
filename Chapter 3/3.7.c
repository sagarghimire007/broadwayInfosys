#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n,a;
    float add=1;
    float sum = 1;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j>0;j--)
        {
           a=j;
           add =  add*a;
        }
         sum = sum + 1/add;
         add = 1;       
    }
    printf(" The sum of eulers number 1+1/1!+1/2!+...+1/n! is %.2f",sum);
    return 0;
}   