//using addition and substraction function for adding and substracting the value

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    int a = 20,b= 10,c,d;
    c = add(a,b);
    printf("%d + %d = %d\n",a,b,c);
    d = sub(a,b);
    printf("%d - %d = %d\n",a,b,c);
    return 0;
}
int add(int m,int n)
{
    int a = m + n;
    return a;
}
int sub(int m,int n)
{
    int a = m - n;
    return a;
}