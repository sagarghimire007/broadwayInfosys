#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    float depreciation,purchase_price,salvage_value,years_of_service;
    printf("Enter the depreciation value : ");
    scanf("%f",&depreciation);
    printf("Enter the purchase price value : ");
    scanf("%f",&purchase_price);
    printf("Enter the years of service value : ");
    scanf("%f",&years_of_service);
    salvage_value = purchase_price-(depreciation*years_of_service);
     printf("The  Salvage Value is : %.2f",salvage_value);
    return 0;
}