/* WAP to print in tthe given format
5678
678
78
8
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n,i,j,k;
    printf("enter the no.\n");
    scanf("%d",&n);

    for(i=1,j=4-i+1; i<=4;i++,j--) //since 4 digit number, i goes to 4
        {
            k=(int)(pow(10,j));
            printf("%d ", n%k);
            printf("\n");
        }
    return 0;
}