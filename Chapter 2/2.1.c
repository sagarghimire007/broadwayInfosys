// harmoninc series of a given value passed from a terminal
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n;
    float sum = 0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(float i = 1; i<=n; i++)
    {
        sum = sum + 1/i;
    }
    printf("The sum of harmonic series 1 + 1/2 +....+ 1/%d = %.2f",n,sum);
    return 0;
}