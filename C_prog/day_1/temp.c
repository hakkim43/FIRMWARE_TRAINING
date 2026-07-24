#include<stdio.h>
int main()
{
 float temp;
 printf("Enter TEMP:");
 scanf("%f",&temp);
 printf("Temperature in celsius %.2fC\n",temp);
 printf("Temperature in Fahrenheit %.2fF\n",(temp*9/5)+32);
 printf("Temperature in kelvin %.2fK\n",(temp + 273.15));
 return 0;
}
