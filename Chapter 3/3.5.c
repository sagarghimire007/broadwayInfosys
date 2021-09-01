// printing S using for loop and if condition

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

int main()
{
    int i,j;
    for(i=1;i<=15;i++)
    {
      for(j=1;j<=15;j++)
      {
        if(i==1)
        {
          if(j<=15)
          printf("*");
        }
        if(i==2)
        {
          if(j<=2 || j>=14)
            printf("*");
          else 
            printf("-");
        }
        if(i==3)
        {
          if(j<=9 || j>=14)
            printf("*");
          else
            printf("-");
        }
        if(i==4)
        {
          if(j<=4)
            printf("*");
          else
          printf("");
        }
        if(i==5)
        {
          if(j<=4)
            printf("*");
          else
          printf("");
        }
        if(i==6)
        {
          if(j<=4)
            printf("*");
          else
          printf("");
        }
        if(i==7)
        {
          if(j<=5 || j>=12)
            printf("*");
          else
          printf("-");
        }
        if(i==8)
        {
          if(j>=12)
            printf("*");
          else
          printf("-");
        }
        if(i==9)
        {
          if(j>=12)
            printf("*");
          else
          printf("-");
        }
        if(i==10)
        {
          if(j<=11)
            printf(" ");
          else
          printf("*");
        }
        if(i==11)
        {
          if(j<=11)
            printf(" ");
          else
          printf("*");
        }
        if(i==12)
        {
          if(j<=11)
            printf(" ");
          else
          printf("*");
        }
        if(i==13)
        {
          if(j<=4 || j>=12)
            printf("*");
          else
          printf("-");
        }
        if(i==14)
        {
          if(j<=3 || j>=12)
            printf("*");
          else
          printf("-");
        }
        if(i==15)
        {
          if(j<=2 || j>=12)
            printf("*");
          else
          printf("-");
        }
      }
      printf("\n");
    }
    return 0;
}