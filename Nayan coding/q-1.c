#include<stdio.h>
void main()
{
    int temperature, celsius;
    printf("Enter temperature:-");
    scanf("%d",&temperature);
    celsius =(temperature - 32)*5/9;
    printf("temprature in celsius:-%d",celsius);
    

}