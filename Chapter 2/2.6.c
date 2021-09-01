// counting the numbers as entered negative or positive
#define N 1000
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    float a[N];
    int count_positive = 0,count_negative = 0;
    printf("Note if you enter 0 then the program will be terminated\n");
    printf("Enter the number : ");
    for(int i=0; i<N; i++)
    {
        scanf("%f",&a[i]);
        if(a[i] == 0)
        {
            goto exit;
        }
        else if(a[i] < 0)
        {
            count_negative += 1;
        }
        else{
            count_positive += 1;
        }
    }
    exit:
    printf("You entered the number 0\n");
    printf("Count of positive number you entered : %d\n",count_positive);
    printf("Count of negative number you entered : %d",count_negative);
    return 0;
}